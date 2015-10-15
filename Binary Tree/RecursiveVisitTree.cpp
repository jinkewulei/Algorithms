#include "BinaruTree.h"
#include <iostream>
using namespace std;

void preOrder(BinTree *root)
{
	if (root)
	{
		cout<<root->data;
		preOrder(root->lchild);
		preOrder(root->rchild);
	}
}

void inOrder(BinTree *root)
{
	if (root)
	{
		inOrder(root->lchild);
		cout<<root->data;
		inOrder(root->rchild);
	}
}

void postOrder(BinTree *root)
{
	if (root)
	{
		postOrder(root->lchild);
		postOrder(root->rchild);
		cout<<root->data;
	}
}