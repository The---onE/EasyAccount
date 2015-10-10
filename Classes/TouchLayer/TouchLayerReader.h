#pragma once

#include "Global.h"
#include "TouchLayer.h"
#include "cocostudio/CocosStudioExport.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

class TouchLayerReader : public NodeReader
{
public:
	static TouchLayerReader* s_singleInstance;

	static TouchLayerReader* getInstance();
	static void purge();
	cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);
};

