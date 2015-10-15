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
	//�����ʽ��ֻҪ�ڵ㲻Ϊ�գ��Ͱ�������������()��Χ����ʹ����������Ϊ��
	//���������ÿ���ڵ�������֮ǰ���á�����������ڵ�����������ָ����������ֻ�����������򲻷ָ�
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
