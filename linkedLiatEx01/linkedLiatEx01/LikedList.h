#pragma once

typedef struct tagNode {
	int	idata;
	struct tagNode* pNext;
} NODE;

typedef struct tagList {
	int iCount;
	struct tagNode* pHeadNode;
	struct tagNode* pTailNode;
} LINKEDLIST;

void InitList(LINKEDLIST* pList);

void pushback(LINKEDLIST* pList,int _Data);
void pushfront(LINKEDLIST* pList, int _Data);

void releaseList(LINKEDLIST* pList);

NODE* getLastNode(NODE* pNode);