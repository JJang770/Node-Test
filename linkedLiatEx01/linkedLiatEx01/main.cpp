#include <iostream>
#include "LikedList.h"

using namespace std;

int main() {

	LINKEDLIST list = {};

	InitList(&list);

	pushback(&list, 100);
	pushback(&list, 155);
	pushback(&list, 33);
	pushback(&list, 99);

	releaseList(&list);

	return 0;
}

