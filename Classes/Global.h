#pragma once

#include "cocos2d.h"
USING_NS_CC;
#include "conv.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
using namespace cocostudio;
using namespace ui;
#include "sqlite/SQL.h"
//#include "XMX_Vibrator.h" //震动器

#define VIBRATE_TIME 48 //震动时间

extern Size visibleSize;
extern Point origin; //应在AppDelegate.cpp中定义全局变量，并在applicationDidFinishLaunching()中初始化
//visibleSize = Director::getInstance()->getVisibleSize();
//origin = Director::getInstance()->getVisibleOrigin();

#define WIDTH visibleSize.width //屏幕宽度
#define HEIGHT visibleSize.height //屏幕高度

#define DATUM visibleSize.height //长度基准
#define SETSIZE(SPRITE,SIZE) ((SPRITE)->setScale(DATUM*(SIZE)/(SPRITE)->getContentSize().height)) //为Sprite等设置相对于长度基准的大小
#define DEFAULT_WIDTH 1080 //默认屏幕宽度
#define PARAM  (DATUM/DEFAULT_WIDTH) //速度标准化参数

/*#define KEYBOARD_FUNCTION void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);\
void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);

#define KEYBOARD_LISTENER(CLASS) EventListenerKeyboard* keyboardListener = EventListenerKeyboard::create();\
keyboardListener->onKeyPressed = CC_CALLBACK_2(CLASS::onKeyPressed, this); \
keyboardListener->onKeyReleased = CC_CALLBACK_2(CLASS::onKeyReleased, this); \
Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(keyboardListener, this);*/

#define CASH_UP 1
#define CASH_DOWN 2
#define CARD_UP 4
#define CARD_DOWN 8
#define CYBER_UP 16
#define CYBER_DOWN 32
#define CASH_DOWN_RECHARGE 64

#define ID 0
#define TYPE 1
#define NUM 2
#define CLASS 3
#define LOAN 4
#define DATATIME 5

#define NOT_LOAN 0
#define LEND 1
#define BORROW 2

#define BREAKFAST 9
#define LUNCH 14
#define DINNER 19

#define IE_STATE 1
#define CASH_STATE (CASH_UP+CASH_DOWN)
#define CARD_STATE (CARD_UP+CARD_DOWN)
#define CYBER_STATE (CYBER_UP+CYBER_DOWN)
#define LOAN_STATE 0

#define LIST_LAYOUT_HEIGHT 48

#define FAIL -1
#define UNNECESSARY -2

#define MAX_ACCOUNT 50

#define ERROR_STRING -1
std::string ItoS(int x);
int StoI(std::string s);
int stdStoI(std::string s);
std::string stdItoS(int x);
