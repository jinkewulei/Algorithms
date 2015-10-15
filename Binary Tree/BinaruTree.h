#ifndef BINARYTREE_H_
#define BINARETREE_H_

typedef struct node
{
	char data;
	struct node *lchild, *rchild;
}BinTree, *pBinTree;

#endif

void createBinTree(BinTree *&root);
void createBinTreeAuto(BinTree *&root);
void showBintree(BinTree *root);
void preOrder(BinTree *root);
void inOrder(BinTree *root);
void postOrder(BinTree *root);
void preOrderWithoutRecursive(BinTree *root);
void inOrderWithoutRecursive(BinTree *root);
void postOrderWithoutRecursive(BinTree *root);
void preOrderWithoutRecursive2(BinTree *root);
