#pragma once

#include "Global.h"
#include "ManageScene.h"
#include "cocostudio/CocosStudioExport.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

class ManageSceneReader : public NodeReader
{
public:
	static ManageSceneReader* s_singleInstance;

	static ManageSceneReader* getInstance();
	static void purge();
	cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);
};
