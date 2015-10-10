#pragma once

#include "Global.h"
#include "cocostudio/WidgetCallBackHandlerProtocol.h"

class ListScene : public Scene, public WidgetCallBackHandlerProtocol
{
public:
	ListView* list;
	int state;
	int dayPay, weekPay, monthPay, totalPay;
	int lend, borrow;
	int indexNow;
	bool loadingFlag;
	bool nextFlag, lastFlag, delayFlag;

	CREATE_FUNC(ListScene);
	bool init();
	void onEnter();
	virtual Widget::ccWidgetTouchCallback onLocateTouchCallback(const std::string &callBackName);
	virtual Widget::ccWidgetClickCallback onLocateClickCallback(const std::string &callBackName);
	virtual Widget::ccWidgetEventCallback onLocateEventCallback(const std::string &callBackName);

	void showIEAccount(Ref* sender);
	void showCashAccount(Ref* sender);
	void showCardAccount(Ref* sender);
	void showCyberAccount(Ref* sender);
	void showLoanAccount(Ref* sender);
	void initAccount();
	void IEAccount(int index);
	void cashAccount(int index);
	void cardAccount(int index);
	void cyberAccount(int index);
	void loanAccount(int index);
	void select(int index, int type1, int type2 = -1, int type3 = -1);
	void makeAccount(int index, int typet, int r, bool rechargeFlag, bool loanFlag);
	Layout* createLayout(int id, int type, int num, std::string sclass, int loan, std::string datatime, bool rechargeFlag, bool loanFlag);
	Button* createButton(int index, int type, bool nextFlag);
	void sumAccount(int type, int num, int loan, std::string datatime, bool rechargeFlag, bool loanFlag);
	int getDateDelta(int year, int month, int day);
	void getTimeNow(int* y, int* m, int* d, int* wd);
	void nextPage(Ref* sender);
	void lastPage(Ref* sender);
	void turnPage(int index);
	void creatrQuitButton();
	void quitScene(Ref* pSender);

	void update(float delta);
};