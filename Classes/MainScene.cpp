#include "MainScene.h"

bool MainScene::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!Scene::init());

		creatrQuitButton();

		CSLoader::getInstance()->registReaderObject("TouchLayerReader", (ObjectFactory::Instance)TouchLayerReader::getInstance);
		CSLoader::getInstance()->registReaderObject("ManageSceneReader", (ObjectFactory::Instance)ManageSceneReader::getInstance);
		CSLoader::getInstance()->registReaderObject("ListSceneReader", (ObjectFactory::Instance)ListSceneReader::getInstance);

		cashLayer = (TouchLayer*)CSLoader::createNode("Main/CashLayer.csb");
		addChild(cashLayer);

		cardLayer = (TouchLayer*)CSLoader::createNode("Main/CardLayer.csb");
		addChild(cardLayer);

		cyberLayer = (TouchLayer*)CSLoader::createNode("Main/CyberLayer.csb");
		addChild(cyberLayer);

		resetLayer = (TouchLayer*)CSLoader::createNode("Main/ResetLayer.csb");
		addChild(resetLayer);

		auto sql = SQL::getInstance();
		sql->openDB();
		sql->createTable();
		sql->closeDB();

		bRet = true;
	} while (0);
	return bRet;
}

void MainScene::onEnter()
{
	do
	{
		Scene::onEnter();

		auto f = UserDefault::getInstance();
		int iTemp;

		iTemp = f->getIntegerForKey("cash");
		cashLayer->setNum(iTemp);
		iTemp = f->getIntegerForKey("card");
		cardLayer->setNum(iTemp);
		iTemp = f->getIntegerForKey("cyber");
		cyberLayer->setNum(iTemp);


		bool flag = f->getBoolForKey("meal", true);
		if (flag)
			checkTime();

	} while (0);
}

void MainScene::creatrQuitButton()
{
	auto closeItem = MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(MainScene::quitGame, this));
	closeItem->setPosition(Point(visibleSize.width / 2, 0));
	closeItem->setAnchorPoint(Point(0.5f, 0));
	SETSIZE(closeItem, 0.05);
	auto menu = Menu::create(closeItem, NULL);
	menu->setPosition(Point::ZERO);
	this->addChild(menu, 1);
}

void MainScene::quitGame(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.", "Alert");
	return;
#endif

	Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}

void MainScene::checkTime()
{
	time_t now;
	struct tm *w;
	time(&now);
	w = localtime(&now);
	int m = w->tm_mon+1;
	int d = w->tm_mday;
	int h = w->tm_hour;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	SYSTEMTIME stime;
	GetLocalTime(&stime);
	m = stime.wMonth;
	d = stime.wDay;
	h = stime.wHour;
#endif

	auto f = UserDefault::getInstance();

	if (m != f->getIntegerForKey("month", -1) || (d != f->getIntegerForKey("day", -1)))
	{
		f->setBoolForKey("breakfast", false);
		f->setBoolForKey("lunch", false);
		f->setBoolForKey("dinner", false);
		f->setIntegerForKey("month", m);
		f->setIntegerForKey("day", d);
	}

	if (h >= BREAKFAST)
	{
		if (h >= LUNCH)
		{
			if (h >= DINNER)
			{
				checkDinner();
			}
			checkLunch();
		}
		checkBreakfast();
	}
}

void MainScene::checkBreakfast()
{
	if (!UserDefault::getInstance()->getBoolForKey("breakfast"))
	{
		auto manageScene = (ManageScene*)CSLoader::createNode("Account/TimeScene.csb");
		((Text*)manageScene->getChildByName("timeText"))->setString(a2u("Ôç²Í"));
		manageScene->time = BREAKFAST;
		Scene* scene = Scene::create();
		scene->addChild(manageScene);
		Director::getInstance()->pushScene(scene);
	}
}

void MainScene::checkLunch()
{
	if (!UserDefault::getInstance()->getBoolForKey("lunch"))
	{
		auto manageScene = (ManageScene*)CSLoader::createNode("Account/TimeScene.csb");
		((Text*)manageScene->getChildByName("timeText"))->setString(a2u("Îç²Í"));
		manageScene->time = LUNCH;
		Scene* scene = Scene::create();
		scene->addChild(manageScene);
		Director::getInstance()->pushScene(scene);
	}
}

void MainScene::checkDinner()
{
	if (!UserDefault::getInstance()->getBoolForKey("dinner"))
	{
		auto manageScene = (ManageScene*)CSLoader::createNode("Account/TimeScene.csb");
		((Text*)manageScene->getChildByName("timeText"))->setString(a2u("Íí²Í"));
		manageScene->time = DINNER;
		Scene* scene = Scene::create();
		scene->addChild(manageScene);
		Director::getInstance()->pushScene(scene);
	}
}
