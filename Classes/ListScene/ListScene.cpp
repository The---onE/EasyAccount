#include "ListScene.h"

bool ListScene::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!Scene::init());

		creatrQuitButton();
		scheduleUpdate();

		bRet = true;
	} while (0);
	return bRet;
}

void ListScene::onEnter()
{
	do
	{
		Scene::onEnter();

		list = (ListView*)getChildByName("list");

		showIEAccount(this);

	} while (0);
}

Widget::ccWidgetTouchCallback ListScene::onLocateTouchCallback(const std::string &callBackName)
{
	return nullptr;
}

Widget::ccWidgetClickCallback ListScene::onLocateClickCallback(const std::string &callBackName)
{
 	if (callBackName == "ieClick")
 	{
 		return CC_CALLBACK_1(ListScene::showIEAccount, this);
	}
	else if (callBackName == "cashClick")
	{
		return CC_CALLBACK_1(ListScene::showCashAccount, this);
	}
	else if (callBackName == "cardClick")
	{
		return CC_CALLBACK_1(ListScene::showCardAccount, this);
	}
	else if (callBackName == "cyberClick")
	{
		return CC_CALLBACK_1(ListScene::showCyberAccount, this);
	}
	else if (callBackName == "loanClick")
	{
		return CC_CALLBACK_1(ListScene::showLoanAccount, this);
	}
	return nullptr;
}

Widget::ccWidgetEventCallback ListScene::onLocateEventCallback(const std::string &callBackName)
{
	return nullptr;
}

void ListScene::initAccount()
{
	nextFlag = false;
	lastFlag = false;
	delayFlag = false;

	list->removeAllItems();
	totalPay = 0;
	dayPay = 0;
	weekPay = 0;
	monthPay = 0;
	lend = 0;
	borrow = 0;
}

void ListScene::showIEAccount(Ref* sender)
{
	if (state == IE_STATE)
		return;
	else
		state = IE_STATE;

	IEAccount(1);
}

void ListScene::IEAccount(int index)
{
	initAccount();

	indexNow = index;

	SQL* s = SQL::getInstance();
	s->openDB();
	int r = s->selectStart();

	makeAccount(index, IE_STATE, r, true, false);

	s->selectEnd();
	s->closeDB();

	Text* text;
	std::string st;
	st = a2u(String::createWithFormat("日支出:%d.%d", dayPay / 10, dayPay % 10)->getCString());
	text = (Text*)getChildByName("text1");
	text->setString(st);

	st = a2u(String::createWithFormat("周支出:%d.%d", weekPay / 10, weekPay % 10)->getCString());
	text = (Text*)getChildByName("text2");
	text->setString(st);

	st = a2u(String::createWithFormat("月支出:%d.%d", monthPay / 10, monthPay % 10)->getCString());
	text = (Text*)getChildByName("text3");
	text->setString(st);

	st = a2u(String::createWithFormat("总支出:%d.%d", totalPay / 10, totalPay % 10)->getCString());
	text = (Text*)getChildByName("text4");
	text->setString(st);
}

void ListScene::showCashAccount(Ref* sender)
{
	if (state == CASH_STATE)
		return;
	else
		state = CASH_STATE;

	cashAccount(1);
}

void ListScene::cashAccount(int index)
{
	initAccount();
	select(index, CASH_UP, CASH_DOWN, CASH_DOWN_RECHARGE);
	indexNow = index;
}

void ListScene::showCardAccount(Ref* sender)
{
	if (state == CARD_STATE)
		return;
	else
		state = CARD_STATE;

	cardAccount(1);
}

void ListScene::cardAccount(int index)
{
	initAccount();
	select(index, CARD_UP, CARD_DOWN);
	indexNow = index;
}

void ListScene::showCyberAccount(Ref* sender)
{
	if (state == CYBER_STATE)
		return;
	else
		state = CYBER_STATE;

	cyberAccount(1);
}

void ListScene::cyberAccount(int index)
{
	initAccount();
	select(index, CYBER_UP, CYBER_DOWN);
	indexNow = index;
}

void ListScene::showLoanAccount(Ref* sender)
{
	if (state == LOAN_STATE)
		return;
	else
		state = LOAN_STATE;

	loanAccount(1);
}

void ListScene::loanAccount(int index)
{
	initAccount();
	indexNow = index;

	SQL* s = SQL::getInstance();
	s->openDB();
	int r = s->selectStartWithLoan();

	makeAccount(index, LOAN_STATE, r, true, true);

	s->selectEnd();
	s->closeDB();

	Text* text;
	std::string st;
	st = a2u(String::createWithFormat("借出:%d.%d", lend / 10, lend % 10)->getCString());
	text = (Text*)getChildByName("text1");
	text->setString(st);

	st = a2u(String::createWithFormat("借入:%d.%d", borrow / 10, borrow % 10)->getCString());
	text = (Text*)getChildByName("text2");
	text->setString(st);

	st = a2u(String::createWithFormat("欠款:%d.%d", (borrow - lend) / 10, abs(borrow - lend) % 10)->getCString());
	text = (Text*)getChildByName("text3");
	text->setString(st);

	st = "";
	text = (Text*)getChildByName("text4");
	text->setString(st);
}

void ListScene::select(int index, int type1, int type2 /* = -1 */, int type3 /* = -1 */)
{
	SQL* s = SQL::getInstance();
	s->openDB();
	int r = s->selectStartWithType(type1, type2, type3);

	makeAccount(index, type1+type2, r, false, false);

	s->selectEnd();
	s->closeDB();

	Text* text;
	std::string st;
	st = a2u(String::createWithFormat("日支出:%d.%d", dayPay / 10, dayPay % 10)->getCString());
	text = (Text*)getChildByName("text1");
	text->setString(st);

	st = a2u(String::createWithFormat("周支出:%d.%d", weekPay / 10, weekPay % 10)->getCString());
	text = (Text*)getChildByName("text2");
	text->setString(st);

	st = a2u(String::createWithFormat("月支出:%d.%d", monthPay / 10, monthPay % 10)->getCString());
	text = (Text*)getChildByName("text3");
	text->setString(st);

	st = a2u(String::createWithFormat("总支出:%d.%d", totalPay / 10, totalPay % 10)->getCString());
	text = (Text*)getChildByName("text4");
	text->setString(st);
}

void ListScene::makeAccount(int index, int typet, int r, bool rechargeFlag, bool loanFlag)
{
	SQL* s = SQL::getInstance();
	int id = 1;
	for (int i = 0; i < r; ++i, ++id)
	{
		int type; int num; std::string sclass; int loan; std::string datatime;
		s->select(i, &type, &num, &sclass, &loan, &datatime);
		if (MAX_ACCOUNT*(index-1)<id && id<=MAX_ACCOUNT*index)
		{
			Layout* l = createLayout(id, type, num, sclass, loan, datatime, rechargeFlag, loanFlag);
			l ? list->pushBackCustomItem(l) : void(--id);
		}
		else
		{
			sumAccount(type, num, loan, datatime, rechargeFlag, loanFlag);
			if (id == MAX_ACCOUNT*index + 1)
			{
				list->pushBackCustomItem(createButton(index+1, typet, true));
			}
			if (id == MAX_ACCOUNT*(index - 1))
			{
				list->pushBackCustomItem(createButton(index-1, typet, false));
			}
		}
	}
}

Layout* ListScene::createLayout(int id, int type, int num, std::string sclass, int loan, std::string datatime, bool rechargeFlag, bool loanFlag)
{
	std::string stype;
	bool flag;
	std::string sflag;
	Color4B color;
	switch (type)
	{
	case CASH_UP:
		stype = a2u("现金");
		color = Color4B::RED;
		flag = true;
		sflag = "+";
		break;
	case CASH_DOWN:
		stype = a2u("现金");
		color = Color4B::GREEN;
		flag = false;
		sflag = "-";
		break;
	case CARD_DOWN:
		stype = a2u("饭卡");
		color = Color4B::GREEN;
		flag = false;
		sflag = "-";
		break;
	case CYBER_DOWN:
		stype = a2u("网银");
		color = Color4B::GREEN;
		flag = false;
		sflag = "-";
		break;
	case CARD_UP:
		if (rechargeFlag)
			return NULL;
		else
		{
			stype = a2u("饭卡");
			color = Color4B::RED;
			flag = true;
			sflag = "+";
		}
		break;
	case CYBER_UP:
		if (rechargeFlag)
			return NULL;
		else
		{
			stype = a2u("网银");
			color = Color4B::RED;
			flag = true;
			sflag = "+";
		}
		break;
	case CASH_DOWN_RECHARGE:
		if (rechargeFlag)
			return NULL;
		else
		{
			stype = a2u("现金");
			color = Color4B::GREEN;
			flag = false;
			sflag = "-";
		}
		break;
	default:
		return NULL;
		break;
	}

	if (!loanFlag && loan != NOT_LOAN)
		color = Color4B::YELLOW;

	Layout* layout = Layout::create();
	layout->setContentSize(Size(list->getContentSize().width, LIST_LAYOUT_HEIGHT+12));

	Text* idT = Text::create();
	idT->setString(a2u(String::createWithFormat("%d", id)->getCString()));
	idT->setFontSize(LIST_LAYOUT_HEIGHT);
	idT->setAnchorPoint(Point(0, 0));
	idT->setPosition(Point(0, 0));
	layout->addChild(idT);

	Text* typeT = Text::create();
	typeT->setString(stype);
	typeT->setFontSize(LIST_LAYOUT_HEIGHT);
	typeT->setTextColor(color);
	typeT->setAnchorPoint(Point(0, 0));
	typeT->setPosition(Point(60, 0));
	layout->addChild(typeT);

	Text* numT = Text::create();
	numT->setString(a2u(String::createWithFormat("%s%d.%d", sflag.c_str(), num/10, num%10)->getCString()));
	numT->setFontSize(LIST_LAYOUT_HEIGHT);
	numT->setTextColor(color);
	numT->setAnchorPoint(Point(0, 0));
	numT->setPosition(Point(160, 0));
	layout->addChild(numT);

	Text* classT = Text::create();
 	classT->setString(sclass);
	classT->setFontSize(LIST_LAYOUT_HEIGHT);
	classT->setTextColor(color);
	classT->setAnchorPoint(Point(0, 0));
 	classT->setPosition(Point(400, 0));
 	layout->addChild(classT);

	std::string data = std::string(datatime.begin(), datatime.begin() + 10);
	std::string time = std::string(datatime.begin() + 11, datatime.end());
	Text* dT = Text::create();
	dT->setString(data);
	dT->setFontSize(LIST_LAYOUT_HEIGHT/2);
	dT->setTextColor(color);
	dT->setAnchorPoint(Point(1, 1));
	dT->setPosition(Point(768, LIST_LAYOUT_HEIGHT));
	layout->addChild(dT);
	Text* tT = Text::create();
	tT->setString(time);
	tT->setTextColor(color);
	tT->setFontSize(LIST_LAYOUT_HEIGHT / 2);
	tT->setAnchorPoint(Point(1, 0));
	tT->setPosition(Point(768, 0));
	layout->addChild(tT);

	int year = stdStoI(std::string(data.begin(), data.begin() + 4));
	int month = stdStoI(std::string(data.begin() + 5, data.begin() + 7));
	int day = stdStoI(std::string(data.begin() + 8, data.begin() + 10));

	int delta = getDateDelta(year, month, day);
	if (delta <= 0)
	{
		layout->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
		layout->setBackGroundColor(Color3B(159, 159, 255));
	}
	else if (delta <= 6)
	{
		layout->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
		layout->setBackGroundColor(Color3B(143, 143, 255));
	}
	else if (delta <= 30)
	{
		layout->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
		layout->setBackGroundColor(Color3B(127, 127, 255));
	}

	int y, m, wd;
	getTimeNow(&y, &m, NULL, &wd);
	if (flag)
	{
		if (loan == BORROW)
			borrow += num;
	}
	else
	{
		if (loan == NOT_LOAN)
		{
			totalPay += num;

			if (month == m && year == y)
				monthPay += num;

			if (delta < wd)
				weekPay += num;

			if (delta == 0)
				dayPay += num;
		}
		else if (loan == LEND)
			lend += num;
	}

	return layout;
}

Button* ListScene::createButton(int index, int type, bool nextFlag)
{
	std::string stype;
	switch (type)
	{
	case IE_STATE:
		stype = "收支 ";
		break;
	case CASH_STATE:
		stype = "现金 ";
		break;
	case CARD_STATE:
		stype = "饭卡 ";
		break;
	case CYBER_STATE:
		stype = "网银 ";
		break;
	case LOAN_STATE:
		stype = "借款 ";
		break;
	default:
		break;
	}
	Button* button = Button::create();
	if (nextFlag)
	{
		stype += "下一页:";
		button->addClickEventListener(CC_CALLBACK_1(ListScene::nextPage, this));
		button->setName("buttonNext");
	}
	else
	{
		stype += "上一页:";
		button->addClickEventListener(CC_CALLBACK_1(ListScene::lastPage, this));
		button->setName("buttonLast");
	}
	stype += stdItoS(index);
	button->setTitleText(a2u(stype.c_str()));
	button->setTitleFontSize(LIST_LAYOUT_HEIGHT);

	loadingFlag = false;

	return button;
}

void ListScene::sumAccount(int type, int num, int loan, std::string datatime, bool rechargeFlag, bool loanFlag)
{
	bool flag;
	switch (type)
	{
	case CASH_UP:
		flag = true;
		break;
	case CASH_DOWN:
		flag = false;
		break;
	case CARD_DOWN:
		flag = false;
		break;
	case CYBER_DOWN:
		flag = false;
		break;
	case CARD_UP:
		if (rechargeFlag)
			return;
		else
		{
			flag = true;
		}
		break;
	case CYBER_UP:
		if (rechargeFlag)
			return;
		else
		{
			flag = true;
		}
		break;
	case CASH_DOWN_RECHARGE:
		if (rechargeFlag)
			return;
		else
		{
			flag = false;
		}
		break;
	default:
		return;
		break;
	}

	int year = stdStoI(std::string(datatime.begin(), datatime.begin() + 4));
	int month = stdStoI(std::string(datatime.begin() + 5, datatime.begin() + 7));
	int day = stdStoI(std::string(datatime.begin() + 8, datatime.begin() + 10));

	int y, m, wd;
	getTimeNow(&y, &m, NULL, &wd);
	int delta = getDateDelta(year, month, day);
	if (flag)
	{
		if (loan == BORROW)
			borrow += num;
	}
	else
	{
		if (loan == NOT_LOAN)
		{
			totalPay += num;

			if (month == m && year == y)
				monthPay += num;

			if (delta < wd)
				weekPay += num;

			if (delta == 0)
				dayPay += num;
		}
		else if (loan == LEND)
			lend += num;
	}

}

void ListScene::getTimeNow(int* y, int* m, int* d, int* wd)
{
	time_t timet;
	struct tm *w;
	time(&timet);
	w = localtime(&timet);
	int iy = w->tm_year + 1900;
	int im = w->tm_mon + 1;
	int id = w->tm_mday;
	int iwd = w->tm_wday;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	SYSTEMTIME stime;
	GetLocalTime(&stime);
	iy = stime.wYear;
	im = stime.wMonth;
	id = stime.wDay;
	iwd = stime.wDayOfWeek;
#endif
	if (!iwd)
		iwd = 7;

	if (y)
		*y = iy;
	if (m)
		*m = im;
	if (d)
		*d = id;
	if (wd)
		*wd = iwd;
}

int ListScene::getDateDelta(int year, int month, int day)
{
	const int days[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
	const int days_[12] = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 };

	int y, m, d;
	getTimeNow(&y, &m, &d, NULL);

	int now, last, delta;
	bool flag;
	if (y != year)
	{
		now = days[m - 1] + d;
		last = days[month - 1] + d;
		delta = (y - year) * 365 + now - last;
	}
	else
	{
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			flag = false;
		else
			flag = true;

		if (flag)
		{
			now = days[m - 1] + d;
			last = days[month - 1] + day;
		}
		else
		{
			now = days_[m - 1] + d;
			last = days_[month - 1] + day;
		}
		delta = now - last;
	}

	return delta;
}

void ListScene::nextPage(Ref* sender)
{
	if (!loadingFlag)
	{
		Button* btn = (Button*)list->getChildByName("buttonNext");

		btn->setTitleText(a2u("正在加载…"));
		loadingFlag = true;

		nextFlag = true;
	}
}

void ListScene::lastPage(Ref* sender)
{
	if (!loadingFlag)
	{
		Button* btn = (Button*)list->getChildByName("buttonLast");

		btn->setTitleText(a2u("正在加载…"));
		loadingFlag = true;

		lastFlag = true;
	}
}

void ListScene::turnPage(int index)
{
	switch (state)
	{
	case IE_STATE:
		IEAccount(index);
		break;
	case CASH_STATE:
		cashAccount(index);
		break;
	case CARD_STATE:
		cardAccount(index);
		break;
	case CYBER_STATE:
		cyberAccount(index);
		break;
	case LOAN_STATE:
		loanAccount(index);
		break;
	default:
		break;
	}
}

void ListScene::creatrQuitButton()
{
	auto closeItem = MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(ListScene::quitScene, this));
	closeItem->setPosition(Point(visibleSize.width / 2, 0));
	closeItem->setAnchorPoint(Point(0.5f, 0));
	SETSIZE(closeItem, 0.05);
	auto menu = Menu::create(closeItem, NULL);
	menu->setPosition(Point::ZERO);
	addChild(menu);
}

void ListScene::quitScene(Ref* pSender)
{
	Director::getInstance()->popScene();
}

void ListScene::update(float delta)
{
	if (nextFlag)
	{
		if (delayFlag)
		{
			turnPage(indexNow + 1);
		}
		else
			delayFlag = true;
	}
	else if (lastFlag)
	{
		if (delayFlag)
		{
			turnPage(indexNow - 1);
		}
		else
			delayFlag = true;
	}
}