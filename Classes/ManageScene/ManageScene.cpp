#include "ManageScene.h"

bool ManageScene::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!Scene::init());

		creatrQuitButton();

		bRet = true;
	} while (0);
	return bRet;
}

void ManageScene::onEnter()
{
	do
	{
		Scene::onEnter();

		Button* meal = (Button*)getChildByName("meal");
		if (meal)
		{
			bool flag = UserDefault::getInstance()->getBoolForKey("meal", true);
			if (flag)
				meal->setTitleText(a2u("提示饭费:开"));
			else
				meal->setTitleText(a2u("提示饭费:关"));
		}

	} while (0);
}

Widget::ccWidgetTouchCallback ManageScene::onLocateTouchCallback(const std::string &callBackName)
{
	return nullptr;
}

Widget::ccWidgetClickCallback ManageScene::onLocateClickCallback(const std::string &callBackName)
{
	if (callBackName == "cashUpClick")
	{
		return CC_CALLBACK_1(ManageScene::cashUp, this);
	}
	else if (callBackName == "cashDownClick")
	{
		return CC_CALLBACK_1(ManageScene::cashDown, this);
	}
	else if (callBackName == "cardUpClick")
	{
		return CC_CALLBACK_1(ManageScene::cardUp, this);
	}
	else if (callBackName == "cardDownClick")
	{
		return CC_CALLBACK_1(ManageScene::cardDown, this);
	}
	else if (callBackName == "cyberUpClick")
	{
		return CC_CALLBACK_1(ManageScene::cyberUp, this);
	}
	else if (callBackName == "cyberDownClick")
	{
		return CC_CALLBACK_1(ManageScene::cyberDown, this);
	}
	else if (callBackName == "timeYesClick")
	{
		return CC_CALLBACK_1(ManageScene::timeYes, this);
	}
	else if (callBackName == "timeNoClick")
	{
		return CC_CALLBACK_1(ManageScene::timeNo, this);
	}
	else if (callBackName == "resetClick")
	{
		return CC_CALLBACK_1(ManageScene::reset, this);
	}
	else if (callBackName == "exportClick")
	{
		return CC_CALLBACK_1(ManageScene::exportDB, this);
	}
	else if (callBackName == "mealClick")
	{
		return CC_CALLBACK_1(ManageScene::meal, this);
	}
	else if (callBackName == "resetOkClick")
	{
		return CC_CALLBACK_1(ManageScene::resetOk, this);
	}
	else if (callBackName == "resetCancelClick")
	{
		return CC_CALLBACK_1(ManageScene::resetCancel, this);
	}
	return nullptr;
}

Widget::ccWidgetEventCallback ManageScene::onLocateEventCallback(const std::string &callBackName)
{
	return nullptr;
}

void ManageScene::cashUp(Ref* sender)
{
	int num = getNum();
	if (num == ERROR_STRING)
	{
		return;
	}
	std::string sclass = getClass();
	bool borrowFlag = isBorrow();
	int loan;
	if (borrowFlag)
		loan = BORROW;
	else
		loan = NOT_LOAN;

	auto sql = SQL::getInstance();
	sql->openDB();
	sql->insert(CASH_UP, num, sclass, loan);
	sql->closeDB();

	up("cash", num);

	Director::getInstance()->popScene();
}

void ManageScene::cashDown(Ref* sender)
{
	int num = getNum();
	if (num == ERROR_STRING)
	{
		return;
	}
	std::string sclass = getClass();
	bool lendFlag = isLend();
	int loan;
	if (lendFlag)
		loan = LEND;
	else
		loan = NOT_LOAN;

	auto sql = SQL::getInstance();
	sql->openDB();
	sql->insert(CASH_DOWN, num, sclass, loan);
	sql->closeDB();

	auto f = UserDefault::getInstance();
	if (sclass == a2u("早餐"))
		f->setBoolForKey("breakfast", true);
	else if (sclass == a2u("午餐"))
		f->setBoolForKey("lunch", true);
	else if (sclass == a2u("晚餐"))
		f->setBoolForKey("dinner", true);

	down("cash", num);

	Director::getInstance()->popScene();
}

void ManageScene::cardUp(Ref* sender)
{
	int num = getNum();
	if (num == ERROR_STRING)
	{
		return;
	}

	auto sql = SQL::getInstance();
	sql->openDB();
	sql->insert(CASH_DOWN_RECHARGE, num, a2u("饭卡充值"), NOT_LOAN);
	sql->insert(CARD_UP, num, a2u("饭卡充值"), NOT_LOAN);
	sql->closeDB();

	down("cash", num);
	up("card", num);

	Director::getInstance()->popScene();
}

void ManageScene::cardDown(Ref* sender)
{
	int num = getNum();
	if (num == ERROR_STRING)
	{
		return;
	}

	std::string sclass = "";
	bool flag = false;
	auto f = UserDefault::getInstance();
	CheckBox* n;
	n = (CheckBox*)getChildByName("breakfastCheck");
	if (n->isSelected())
	{
		sclass += a2u("早餐");
		flag = true;
		f->setBoolForKey("breakfast", true);
	}
	n = (CheckBox*)getChildByName("lunchCheck");
	if (n->isSelected())
	{
		sclass += a2u("午餐");
		flag = true;
		f->setBoolForKey("lunch", true);
	}
	n = (CheckBox*)getChildByName("dinnerCheck");
	if (n->isSelected())
	{
		sclass += a2u("晚餐");
		flag = true;
		f->setBoolForKey("dinner", true);
	}
	n = (CheckBox*)getChildByName("bathCheck");
	if (n->isSelected())
		(sclass += a2u("洗澡")), flag = true;
	n = (CheckBox*)getChildByName("otherCheck");
	if (n->isSelected())
	{
		std::string temp = getClass();
		if (temp.empty())
			return;
		sclass += getClass();
		flag = true;
	}

	if (!flag)
		return;

	bool lendFlag = isLend();
	int loan;
	if (lendFlag)
		loan = LEND;
	else
		loan = NOT_LOAN;

	auto sql = SQL::getInstance();
	sql->openDB();
	sql->insert(CARD_DOWN, num, sclass, loan);
	sql->closeDB();

	down("card", num);

	Director::getInstance()->popScene();
}

void ManageScene::cyberUp(Ref* sender)
{
	int num = getNum();
	if (num == ERROR_STRING)
	{
		return;
	}

	auto sql = SQL::getInstance();
	sql->openDB();
	sql->insert(CASH_DOWN_RECHARGE, num, a2u("网银充值"), NOT_LOAN);
	sql->insert(CYBER_UP, num, a2u("网银充值"), NOT_LOAN);
	sql->closeDB();

	down("cash", num);
	up("cyber", num);

	Director::getInstance()->popScene();
}

void ManageScene::cyberDown(Ref* sender)
{
	int num = getNum();
	if (num == ERROR_STRING)
	{
		return;
	}
	std::string sclass = getClass();
	bool lendFlag = isLend();
	int loan;
	if (lendFlag)
		loan = LEND;
	else
		loan = NOT_LOAN;

	auto sql = SQL::getInstance();
	sql->openDB();
	sql->insert(CYBER_DOWN, num, sclass, loan);
	sql->closeDB();

	auto f = UserDefault::getInstance();
	if (sclass == a2u("早餐"))
		f->setBoolForKey("breakfast", true);
	else if (sclass == a2u("午餐"))
		f->setBoolForKey("lunch", true);
	else if (sclass == a2u("晚餐"))
		f->setBoolForKey("dinner", true);

	down("cyber", num);

	Director::getInstance()->popScene();
}

void ManageScene::timeYes(Ref* sender)
{
	if (((CheckBox*)getChildByName("cardCheck"))->isSelected())
	{
		ManageScene* scene = (ManageScene*)CSLoader::createNode("Account/CardDownScene.csb");
		auto f = UserDefault::getInstance();
		switch (time)
		{
		case BREAKFAST:
			((CheckBox*)scene->getChildByName("breakfastCheck"))->setSelected(true);
			f->setBoolForKey("breakfast", true);
			break;
		case LUNCH:
			((CheckBox*)scene->getChildByName("lunchCheck"))->setSelected(true);
			f->setBoolForKey("lunch", true);
			break;
		case DINNER:
			((CheckBox*)scene->getChildByName("dinnerCheck"))->setSelected(true);
			f->setBoolForKey("dinner", true);
			break;
		default:
			break;
		}

		auto p = getParent();
		p->addChild(scene);
		p->removeChild(this);
	}
	else if (((CheckBox*)getChildByName("cashCheck"))->isSelected())
	{
		ManageScene* scene = (ManageScene*)CSLoader::createNode("Account/CashDownScene.csb");
		auto f = UserDefault::getInstance();
		switch (time)
		{
		case BREAKFAST:
			((TextField*)scene->getChildByName("class"))->setString(a2u("早餐"));
			f->setBoolForKey("breakfast", true);
			break;
		case LUNCH:
			((TextField*)scene->getChildByName("class"))->setString(a2u("午餐"));
			f->setBoolForKey("lunch", true);
			break;
		case DINNER:
			((TextField*)scene->getChildByName("class"))->setString(a2u("晚餐"));
			f->setBoolForKey("dinner", true);
			break;
		default:
			break;
		}

		auto p = getParent();
		p->addChild(scene);
		p->removeChild(this);
	}
	else if (((CheckBox*)getChildByName("cyberCheck"))->isSelected())
	{
		ManageScene* scene = (ManageScene*)CSLoader::createNode("Account/CyberDownScene.csb");
		auto f = UserDefault::getInstance();
		switch (time)
		{
		case BREAKFAST:
			((TextField*)scene->getChildByName("class"))->setString(a2u("早餐"));
			f->setBoolForKey("breakfast", true);
			break;
		case LUNCH:
			((TextField*)scene->getChildByName("class"))->setString(a2u("午餐"));
			f->setBoolForKey("lunch", true);
			break;
		case DINNER:
			((TextField*)scene->getChildByName("class"))->setString(a2u("晚餐"));
			f->setBoolForKey("dinner", true);
			break;
		default:
			break;
		}

		auto p = getParent();
		p->addChild(scene);
		p->removeChild(this);
	}
}

void ManageScene::timeNo(Ref* sender)
{
	auto f = UserDefault::getInstance();
	switch (time)
	{
	case BREAKFAST:
		f->setBoolForKey("breakfast", true);
		break;
	case LUNCH:
		f->setBoolForKey("lunch", true);
		break;
	case DINNER:
		f->setBoolForKey("dinner", true);
		break;
	default:
		break;
	}
	Director::getInstance()->popScene();
}

void ManageScene::resetOk(Ref* sender)
{
	std::string s = ((TextField*)getChildByName("text"))->getString();
	if (s == "OK")
	{
		clearDB();
		quitScene(sender);
	}
}

void ManageScene::resetCancel(Ref* sender)
{
	quitScene(sender);
}

void ManageScene::reset(Ref* sender)
{
	auto manageScene = (Scene*)CSLoader::createNode("Account/ResetScene.csb");
	Scene* scene = Scene::create();
	scene->addChild(manageScene);
	Director::getInstance()->pushScene(scene);
}

void ManageScene::exportDB(Ref* sender)
{
	Button* button = (Button*)getChildByName("export");

	std::string s = u2a(button->getTitleText().c_str());
	if (s == "导出数据")
	{
		button->setTitleFontSize(80);
		button->setTitleText(a2u("仅支持Android"));

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

		button->setTitleFontSize(100);
		button->setTitleText(a2u("正在导出…"));

		std::string source = FileUtils::getInstance()->getWritablePath() + "account.db";
		FILE *from = fopen(source.c_str(),"r");
		if (!from)
		{
			button->setTitleFontSize(100);
			button->setTitleText(a2u("导出失败！"));
			return;
		}

		std::string destination = "/mnt/sdcard/EasyAccount-account.db";
		FILE *to = fopen(destination.c_str(),"w+");
		if (!to)
		{
			destination = "/mnt/storage/sdcard/EasyAccount-account.db";
			to = fopen(destination.c_str(),"w+");
			if (!to)
			{
				destination = "/mnt/storage/sdcard0/EasyAccount-account.db";
				to = fopen(destination.c_str(),"w+");
				if (!to)
				{
					button->setTitleFontSize(100);
					button->setTitleText(a2u("导出失败！"));
					return;
				}
			}
		}
		char ch;
		while((ch=fgetc(from))!=EOF)
		{
			if(fputc(ch, to)==EOF)
			{
				button->setTitleFontSize(100);
				button->setTitleText(a2u("导出失败！"));
				return;
			}
		}
		fputc(EOF, to);
		fclose(from);
		fclose(to);

		button->setTitleFontSize(100);
		button->setTitleText(a2u("导出完成！"));

#endif
	}
}

void ManageScene::meal(Ref* sender)
{
	auto f = UserDefault::getInstance();
	bool flag = f->getBoolForKey("meal", true);
	if (flag)
	{
		f->setBoolForKey("meal", false);
		((Button*)getChildByName("meal"))->setTitleText(a2u("提示饭费:关"));
	}
	else
	{
		f->setBoolForKey("meal", true);
		((Button*)getChildByName("meal"))->setTitleText(a2u("提示饭费:开"));
	}
}

int ManageScene::getNum()
{
	TextField* n = (TextField*)getChildByName("num");
	std::string text = n->getString();
	return StoI(text);
}

std::string ManageScene::getClass()
{
	TextField* n = (TextField*)getChildByName("class");
	std::string text = n->getString();
	return text;
}

bool ManageScene::isLend()
{
	CheckBox* n = (CheckBox*)getChildByName("lendCheck");
	return n->isSelected();
}

bool ManageScene::isBorrow()
{
	CheckBox* n = (CheckBox*)getChildByName("borrowCheck");
	return n->isSelected();
}

void ManageScene::down(std::string s, int num)
{
	auto f = UserDefault::getInstance();
	f->setIntegerForKey(s.c_str(), f->getIntegerForKey(s.c_str()) - num);
}

void ManageScene::up(std::string s, int num)
{
	auto f = UserDefault::getInstance();
	f->setIntegerForKey(s.c_str(), f->getIntegerForKey(s.c_str()) + num);
}

void ManageScene::clearUserDefault()
{
	auto f = UserDefault::getInstance();
	f->setIntegerForKey("card", 0);
	f->setIntegerForKey("cash", 0);
	f->setIntegerForKey("cyber", 0);
}

void ManageScene::clearSQL()
{
	auto sql = SQL::getInstance();
	sql->openDB();
	sql->clearDB();
	sql->closeDB();
}

void ManageScene::clearDB()
{
	clearUserDefault();
	clearSQL();
}

void ManageScene::creatrQuitButton()
{
	auto closeItem = MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(ManageScene::quitScene, this));
	closeItem->setPosition(Point(visibleSize.width / 2, 0));
	closeItem->setAnchorPoint(Point(0.5f, 0));
	SETSIZE(closeItem, 0.05);
	auto menu = Menu::create(closeItem, NULL);
	menu->setPosition(Point::ZERO);
	addChild(menu);
}

void ManageScene::quitScene(Ref* pSender)
{
	Director::getInstance()->popScene();
}
