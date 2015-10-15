#include "BinaruTree.h"
#include <iostream>
using namespace std;

int main()
{
	BinTree *root = new BinTree;
	//createBinTree(root);
	createBinTreeAuto(root);

	//showBintree(root);
	cout<<"visit by recursive:"<<endl;
	preOrder(root);
	cout<<endl;
	inOrder(root);
	cout<<endl;
	postOrder(root);
	cout<<endl;

	cout<<endl<<"visit without recursive:"<<endl;
	//preOrderWithoutRecursive(root);
	cout<<endl;
	preOrderWithoutRecursive2(root);
	cout<<endl;
	inOrderWithoutRecursive(root);
	cout<<endl;
	postOrderWithoutRecursive(root);

	getchar();
	return 0;
}