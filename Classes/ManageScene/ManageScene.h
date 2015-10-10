#pragma once

#include "Global.h"
#include "cocostudio/WidgetCallBackHandlerProtocol.h"

class ManageScene : public Scene, public WidgetCallBackHandlerProtocol
{
public:
	int time;

	CREATE_FUNC(ManageScene);
	bool init();
	void onEnter();
	virtual Widget::ccWidgetTouchCallback onLocateTouchCallback(const std::string &callBackName);
	virtual Widget::ccWidgetClickCallback onLocateClickCallback(const std::string &callBackName);
	virtual Widget::ccWidgetEventCallback onLocateEventCallback(const std::string &callBackName);
	void cashUp(Ref* sender);
	void cashDown(Ref* sender);
	void cardUp(Ref* sender);
	void cardDown(Ref* sender);
	void cyberUp(Ref* sender);
	void cyberDown(Ref* sender);
	void timeYes(Ref* sender);
	void timeNo(Ref* sender);
	void resetOk(Ref* sender);
	void resetCancel(Ref* sender);
	void reset(Ref* sender);
	void exportDB(Ref* sender);
	void meal(Ref* sender);

	int getNum();
	std::string getClass();
	bool isLend();
	bool isBorrow();

	void down(std::string s, int num);
	void up(std::string s, int num);

	void clearUserDefault();
	void clearSQL();
	void clearDB();

	void creatrQuitButton();
	void quitScene(Ref* pSender);
};
