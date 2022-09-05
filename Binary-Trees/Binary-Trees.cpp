#include <iostream>
#include "btnode.h"
#include "bst.h"
#include"avl.h"
#include "redblack.h"
#include "huffman.h"
#include "heaps.h"


using namespace std;

int main()
{
	BTNode<int>* root = new BTNode<int>(10);
	root->setLeft(new BTNode<int>(8));
	root->setRight(new BTNode<int>(22));
	root->setLeft(new BTNode<int>(4));
	root->setRight(new BTNode<int>(12));
	root->Printrange(root, 3, 25);
	return 0;
}


