#include <iostream>
#include "list.h"
using namespace std;

//Regard the new list as a new one, but the node is not generate by us
//So we set the head as null at first, and insert the node in front of head one by one
//"delete" the old list's node once insertion
//and set the head point to the newest node

void reverseList(list &head)
{
	list p = head; 
	head = NULL;
	while (p)
	{
		list temp = p;
		p = p->next;
		
		temp->next = head;
		head = temp;
	}
}