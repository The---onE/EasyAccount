#include "ManageSceneReader.h"

ManageSceneReader* ManageSceneReader::s_singleInstance = nullptr;

ManageSceneReader* ManageSceneReader::getInstance()
{
	if (!s_singleInstance)
	{
		s_singleInstance = new ManageSceneReader();
	}
	return s_singleInstance;
}

void ManageSceneReader::purge()
{
	CC_SAFE_DELETE(s_singleInstance);
}

Node* ManageSceneReader::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions)
{
	ManageScene* node = ManageScene::create();
	setPropsWithFlatBuffers(node, nodeOptions);
	return node;
}
