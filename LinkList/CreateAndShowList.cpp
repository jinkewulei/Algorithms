#include <iostream>
#include "list.h"
using namespace std;

void createList(list &l, int arr[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		l->data = arr[i];
		list node = new listNode;
		l->next = node;
		l = l->next;
	}
	l->data = arr[length-1];
	l->next = NULL;

}

void showList(list head)
{
	list p = head;
	while (p)
	{
		cout<<p->data<<"\t";
		p = p->next;
	}
}