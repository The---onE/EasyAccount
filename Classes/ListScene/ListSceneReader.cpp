#include "ListSceneReader.h"

ListSceneReader* ListSceneReader::s_singleInstance = nullptr;

ListSceneReader* ListSceneReader::getInstance()
{
	if (!s_singleInstance)
	{
		s_singleInstance = new ListSceneReader();
	}
	return s_singleInstance;
}

void ListSceneReader::purge()
{
	CC_SAFE_DELETE(s_singleInstance);
}

Node* ListSceneReader::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions)
{
	ListScene* node = ListScene::create();
	setPropsWithFlatBuffers(node, nodeOptions);
	return node;
}
