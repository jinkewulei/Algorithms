#include "BinaruTree.h"
#include <iostream>
#include <stack>
using namespace std;

//非递归前序遍历算法1
//1）访问结点p，初始是根节点，将其入栈，访问p的左子树
//2）如果左子树不为空，则将其左子树根设为p，重复1
//3）如果左子树根为空，则将栈顶元素出栈，并将其右孩子设置为结点p,重复上述步骤
//4）直到栈空且p指针为空
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

//非递归前序遍历算法2
//1）初始时将根节点入栈
//2）将栈顶元素出栈并且访问此元素，然后依次将其右孩子和左孩子入栈（因为是前序，右孩子要在左孩子之后访问）
//3）对于栈顶的每一个元素，重复步骤2
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

//非递归中序遍历
//算法思想：将左子树一路压栈，一直到左子树空
//输出栈顶元素并将其出栈，将当前指针指到栈顶元素的右孩子，重读第一步操作，直到栈为空且指针为空
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

//非递归后序遍历
void postOrderWithoutRecursive(BinTree *root)
{
	stack<BinTree *> s;
	BinTree *preVisit = NULL;

	while (!s.empty() || root !=NULL)
	{
		while (root != NULL)
		{
			s.push(root);
			root = root->lchild;		//向左一路到底
		}
		root = s.top();
		if (root->rchild == NULL || root->rchild == preVisit)
		{
			//当栈顶元素的右子树为空或者右子树已经被访问，则可以访问此节点
			cout<<root->data;
			preVisit = root;
			s.pop();
			root = NULL;		//将root置空，否则会在下次迭代中把他再次加入根节点
		}
		else
		{
			root = root->rchild;
		}
	}
}
