#include "LikedList.h"
#include <iostream>

void InitList(LINKEDLIST* pList)
{
	pList->iCount = 0;
	pList->pHeadNode = nullptr;
	pList->pTailNode = nullptr;
}

void pushback(LINKEDLIST* pList, int _idata)
{
	// get new Node;
	NODE* pNode = (NODE*)malloc(sizeof(NODE));
	pNode->idata = _idata;
	pNode->pNext = nullptr;

	
	// check empty
	if (pList->pHeadNode == nullptr) {
		pList->pHeadNode = pNode;
	}
	else {
		// get last Node

		/*
		NODE* plastNode;
		plastNode = pList->pHeadNode;
		while (plastNode->pNext) {
			plastNode = plastNode->pNext;
		}*/

		// get last Node
		NODE* plastNode = getLastNode(pList->pHeadNode);

		plastNode->pNext = pNode;
	}
	
	++pList->iCount;
	pList->pTailNode = pNode;
	/*
	// get last Node
	NODE* plastNode=getLastNode(pList->pHeadNode);
	plastNode->pNext = pNode;
	++pList->iCount;
	*/
}

void pushfront(LINKEDLIST* pList, int _iData)
{
	// get new Node;
	NODE* pNode = (NODE*)malloc(sizeof(NODE));
	pNode->idata = _iData;
	pNode->pNext = nullptr;

	// backup Head
	NODE* pSecond = pList->pHeadNode;
	pList->pHeadNode = pNode;
	pNode->pNext = pSecond;
	++pList->iCount;

}

void releaseList(LINKEDLIST* pList)
{
	NODE* pNode;
	pNode = pList->pHeadNode;


	while (pNode) {
		NODE* ptmpNode = pNode->pNext;
		free(pNode);
		pNode = ptmpNode->pNext;
	}

	pList->iCount = 0;
	pList->pHeadNode = nullptr;
}

NODE* getLastNode(NODE* pNode)
{
	NODE* pLastNode = pNode;

	// if null return;
	if (pLastNode->pNext == nullptr) return pLastNode;

	return getLastNode(pLastNode->pNext);
}

	
