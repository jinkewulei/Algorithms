#include "BinaruTree.h"
#include <iostream>
using namespace std;

//Create Binary Tree
void createBinTree(BinTree *&root)
{
	//A(B(#,D(E,#)),C)
	//intput AB#DE###C##
	//input '#' to end current subtree
	char ch;
	cin>>ch;

	if(ch == '#')
		root = NULL;
	else
	{
		root = new BinTree;
		root->data = ch;
		createBinTree(root->lchild);
		createBinTree(root->rchild);
	}
}

//Auto Create Binary Tree
char treeStr[] = "AB#DE###C##";
int length = 11;
void createBinTreeAuto(BinTree *&root)
{
	//A(B(#,D(E,#)),C)
	//intput AB#DE###C##
	char ch;
	if (length != 0)
	{
		ch = treeStr[11-length];
		length--;
	}

	if(ch == '#')
		root = NULL;
	else
	{
		root = new BinTree;
		root->data = ch;
		createBinTreeAuto(root->lchild);
		createBinTreeAuto(root->rchild);
	}
}

//Print Binary Tree
void showBintree(BinTree *root)
{
	//输出格式：只要节点不为空，就把其左右子树用()包围，即使其左右子树为空
	//（）中输出每个节点右子树之前，用‘，’将这个节点的左右子树分隔，但是如果只有左子树，则不分隔
	if (root != NULL)
	{
		cout<<root->data;
		cout<<'(';
		if (root->lchild != NULL)
		{
			showBintree(root->lchild);
		}
		if (root->rchild != NULL)
		{
			cout<<',';
			showBintree(root->rchild);
		}
		cout<<')';
	}
}
