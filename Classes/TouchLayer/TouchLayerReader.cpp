#include "TouchLayerReader.h"

TouchLayerReader* TouchLayerReader::s_singleInstance = nullptr;

TouchLayerReader* TouchLayerReader::getInstance()
{
	if (!s_singleInstance)
	{
		s_singleInstance  = new TouchLayerReader();
	}
	return s_singleInstance;
}

void TouchLayerReader::purge()
{
	CC_SAFE_DELETE(s_singleInstance);
}

Node* TouchLayerReader::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions)
{
	TouchLayer* node = TouchLayer::create();
	setPropsWithFlatBuffers(node, nodeOptions);
	return node;
}
