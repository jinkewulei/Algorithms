#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	list l = new listNode;
	list listHead = l;
	int arr[10] = {3,4,6,5,1,7,0,8,2,9};
	int length = sizeof(arr) / sizeof(int);
	
	createList(l, arr, length);
	showList(listHead);

	reverseList(listHead);
	showList(listHead);
	
	getchar();
	return 0;
}