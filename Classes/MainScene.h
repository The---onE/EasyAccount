#pragma once

#include "Global.h"
#include "TouchLayer/TouchLayerReader.h"
#include "ManageScene/ManageSceneReader.h"
#include "ListScene/ListSceneReader.h"

class MainScene : public Scene
{
public:
	TouchLayer* cashLayer;
	TouchLayer* cardLayer;
	TouchLayer* cyberLayer;
	TouchLayer* resetLayer;

	CREATE_FUNC(MainScene);
    bool init();
	void onEnter();
	void creatrQuitButton();
	void quitGame(Ref* pSender);
	void checkTime();
	void checkBreakfast();
	void checkLunch();
	void checkDinner();
};
