#include "TouchLayer.h"
#include "MainScene.h"

bool TouchLayer::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!Layer::init());
		bRet = true;
	} while (0);
	return bRet;
}

Widget::ccWidgetTouchCallback TouchLayer::onLocateTouchCallback(const std::string &callBackName)
{
	return nullptr;
}

Widget::ccWidgetClickCallback TouchLayer::onLocateClickCallback(const std::string &callBackName)
{
	if (callBackName == "cashUpClick")
	{
		return CC_CALLBACK_1(TouchLayer::cashUp, this);
	}
	else if (callBackName == "cashDownClick")
	{
		return CC_CALLBACK_1(TouchLayer::cashDown, this);
	}
	else if (callBackName == "cardUpClick")
	{
		return CC_CALLBACK_1(TouchLayer::cardUp, this);
	}
	else if (callBackName == "cardDownClick")
	{
		return CC_CALLBACK_1(TouchLayer::cardDown, this);
	}
	else if (callBackName == "cyberUpClick")
	{
		return CC_CALLBACK_1(TouchLayer::cyberUp, this);
	}
	else if (callBackName == "cyberDownClick")
	{
		return CC_CALLBACK_1(TouchLayer::cyberDown, this);
	}
	else if (callBackName == "settingClick")
	{
		return CC_CALLBACK_1(TouchLayer::settingClick, this);
	}
	else if (callBackName == "listClick")
	{
		return CC_CALLBACK_1(TouchLayer::listClick, this);
	}
	return nullptr;
}

Widget::ccWidgetEventCallback TouchLayer::onLocateEventCallback(const std::string &callBackName)
{
	return nullptr;
}

void TouchLayer::intoScene(std::string csbName)
{
	auto manageScene = (ManageScene*)CSLoader::createNode(csbName);
	Scene* scene = Scene::create();
	scene->addChild(manageScene);
	Director::getInstance()->pushScene(scene);
}

void TouchLayer::cashUp(Ref* sender)
{
	intoScene("Account/CashUpScene.csb");
}

void TouchLayer::cashDown(Ref* sender)
{
	intoScene("Account/CashDownScene.csb");
}

void TouchLayer::cardUp(Ref* sender)
{
	intoScene("Account/CardUpScene.csb");
}

void TouchLayer::cardDown(Ref* sender)
{
	intoScene("Account/CardDownScene.csb");
}

void TouchLayer::cyberUp(Ref* sender)
{
	intoScene("Account/CyberUpScene.csb");
}

void TouchLayer::cyberDown(Ref* sender)
{
	intoScene("Account/CyberDownScene.csb");
}

void TouchLayer::settingClick(Ref* sender)
{
	intoScene("Account/SettingScene.csb");
}

void TouchLayer::listClick(Ref* sender)
{
	TextField* n = (TextField*)getChildByName("text");
	//if (n->getString() == "123")
		intoScene("List/ListScene.csb");
}

void TouchLayer::setNum(int num)
{
	Text* n = (Text*)getChildByName("layout")->getChildByName("num");
	std::string text = ItoS(num);
	n->setString(text);
}

