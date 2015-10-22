#ifndef LIST_H_
#define LIST_H_

typedef struct listNode
{
	int data;
	struct listNode * next;
}listNode, *list;

void createList(list &l, int arr[], int length);
void showList(list head);
void reverseList(list &head);

#endif