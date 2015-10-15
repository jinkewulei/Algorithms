#include "BinaruTree.h"
#include <iostream>
#include <stack>
using namespace std;

//�ǵݹ�ǰ������㷨1
//1�����ʽ��p����ʼ�Ǹ��ڵ㣬������ջ������p��������
//2�������������Ϊ�գ���������������Ϊp���ظ�1
//3�������������Ϊ�գ���ջ��Ԫ�س�ջ���������Һ�������Ϊ���p,�ظ���������
//4��ֱ��ջ����pָ��Ϊ��
void preOrderWithoutRecursive(BinTree *root)
{
	stack<BinTree* > preRoots;

	if (root == NULL)
	{
		cout<<"Empty Tree."<<endl;
		return;
	}
	
	while (!preRoots.empty() || root != NULL)
	{
		while (root!=NULL)
		{
			cout<<root->data;
			preRoots.push(root);
			root = root->lchild;
		}
		if (!preRoots.empty())
		{
			root = (preRoots.top())->rchild;
			preRoots.pop();
		}
	}
}

//�ǵݹ�ǰ������㷨2
//1����ʼʱ�����ڵ���ջ
//2����ջ��Ԫ�س�ջ���ҷ��ʴ�Ԫ�أ�Ȼ�����ν����Һ��Ӻ�������ջ����Ϊ��ǰ���Һ���Ҫ������֮����ʣ�
//3������ջ����ÿһ��Ԫ�أ��ظ�����2
void preOrderWithoutRecursive2(BinTree *root)
{
	stack<BinTree * > spreRoots;

	spreRoots.push(root);
	BinTree *temp = NULL;
	while (!spreRoots.empty())
	{
		temp = spreRoots.top();
		cout<<temp->data;
		spreRoots.pop();

		if (temp->rchild != NULL)
		{
			spreRoots.push(temp->rchild);
		}
		if (temp->lchild != NULL)
		{
			spreRoots.push(temp->lchild);
		}
	}
}

//�ǵݹ��������
//�㷨˼�룺��������һ·ѹջ��һֱ����������
//���ջ��Ԫ�ز������ջ������ǰָ��ָ��ջ��Ԫ�ص��Һ��ӣ��ض���һ��������ֱ��ջΪ����ָ��Ϊ��
void inOrderWithoutRecursive(BinTree *root)
{
	stack<BinTree *> s;

	while (!s.empty() || root != NULL)
	{
		while (root != NULL)
		{
			s.push(root);
			root = root->lchild;
		}
		if (!s.empty())
		{
			root = s.top();
			cout<<root->data;
			s.pop();
			root = root->rchild;
		}
	}
}

//�ǵݹ�������
void postOrderWithoutRecursive(BinTree *root)
{
	stack<BinTree *> s;
	BinTree *preVisit = NULL;

	while (!s.empty() || root !=NULL)
	{
		while (root != NULL)
		{
			s.push(root);
			root = root->lchild;		//����һ·����
		}
		root = s.top();
		if (root->rchild == NULL || root->rchild == preVisit)
		{
			//��ջ��Ԫ�ص�������Ϊ�ջ����������Ѿ������ʣ�����Է��ʴ˽ڵ�
			cout<<root->data;
			preVisit = root;
			s.pop();
			root = NULL;		//��root�ÿգ���������´ε����а����ٴμ�����ڵ�
		}
		else
		{
			root = root->rchild;
		}
	}
}
