#pragma once
#include"btnode.h";

#pragma once
#include<iostream>

template <typename T>
class BST : BTNode {

private:
	T value;
	BTNode* left;
	BTNode* right;

public:
	// Two constructors 
//	BTNode() {
	//	left = right = NULL;
	//}
	BST(E v, BTNode* l = NULL, BTNode* r = NULL) {
		value = v; left = l; right = r;
	}

	~BST() {} // Destructor

	
	bool isBST(BST<T>*root) {
		if (root == NULL)
			return true;
		if (root->getLeft->getValue > root->getValue && root->getRight->getValue < root->getValue)
			return false;
		return isBST(root->getLeft()) && isBST(root->getRight());
	}
	
};



