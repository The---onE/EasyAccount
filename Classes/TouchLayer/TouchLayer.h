#pragma once

#include "Global.h"
#include "cocostudio/WidgetCallBackHandlerProtocol.h"

class TouchLayer : public Layer, public WidgetCallBackHandlerProtocol
{
public:
	CREATE_FUNC(TouchLayer);
	bool init();
	virtual Widget::ccWidgetTouchCallback onLocateTouchCallback(const std::string &callBackName);
	virtual Widget::ccWidgetClickCallback onLocateClickCallback(const std::string &callBackName);
	virtual Widget::ccWidgetEventCallback onLocateEventCallback(const std::string &callBackName);
	void cashUp(Ref* sender);
	void cashDown(Ref* sender);
	void cardUp(Ref* sender);
	void cardDown(Ref* sender);
	void cyberUp(Ref* sender);
	void cyberDown(Ref* sender);
	void settingClick(Ref* sender);
	void listClick(Ref* sender);
	
	void setNum(int num);

	void intoScene(std::string csbName);
};
