#pragma once

#include "Global.h"
#include "ListScene.h"
#include "cocostudio/CocosStudioExport.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

class ListSceneReader : public NodeReader
{
public:
	static ListSceneReader* s_singleInstance;

	static ListSceneReader* getInstance();
	static void purge();
	cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);
};
