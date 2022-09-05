#pragma once
#include<iostream>

template <typename E>
class BTNode {

private:
	E value;
	BTNode* left;
	BTNode* right;

public:
	// Two constructors 
	BTNode() {
		left = right = NULL;
	}
	BTNode(E v, BTNode* l = NULL, BTNode* r = NULL) {
		value = v; left = l; right = r;
	}

	~BTNode() {} // Destructor

	E& getValue() {
		return value;
	}
	void setValue(const E& v) {
		value = v;
	}
	BTNode* getLeft() const {
		return left;
	}
	BTNode* getRight() const {
		return right;
	}
	void setLeft(BTNode<E>* b) {
		left = (BTNode*)b;
	}
	void setRight(BTNode<E>* b) {
		right = (BTNode*)b;
	}
	bool isLeaf() {
		return (left == NULL) && (right == NULL);
	}
	void Printrange(BTNode<int>*root, int low, int high) {
		if (root == NULL)
			return;
		if (high < root->getValue())
			Printrange(root->getLeft(), low, high);
		if (low <= root->getValue() && high >= root->getValue())
		{
			cout << root->getValue();
			cout << " ";
		}
		if (high > root->getValue())
			Printrange(root->getRight(), low, high);
	}
	bool search(BTNode<E>*root, E k) {
		if (root == NULL)
			return false;
		if (root->getValue() == k)
			return true;
		return search(root->getLeft(), k) && search(root->getRight(), k);
	}
	int height(BTNode<E>*root) {

		if (root == NULL)
			return  0;
		return 1 + height(root->getLeft);
		return 1 + height(root->getRight);
	}
	int countLeaf(BTNode<E>*root) {
		if (root == NULL)
			return  0;
		if (root->getLeft() == NULL && root->getRight() == NULL)
			return 1;
		return countLeaf(root->getLeft()) + countLeaf(root->getRight());
	}
	int sumNode(BTNode<E>*root) {
		if (root == NULL)
			return 0;
		return sumNode(root->getValue) + sumNode(root->getLeft) + sumNode(root->getRight);
	}
	void printMultipleFive(BTNode<E>*root) {
		if (root == NULL)
			return;
		if (root->getValue() % 5 == 0)
			cout << root->getValue();
		cout << " ";
		printMultipleFive(root->getLeft());
		printMultipleFive(root->getRight());
	}
	bool isBST(BTNode<E>*root) {
		if (root == NULL)
			return true;
		if (root->getLeft->getValue > root->getValue && root->getRight->getValue < root->getValue)
			return false;
		return isBST(root->getLeft()) && isBST(root->getRight());
	}
	bool isFull(BTNode<E>*root) {
		if (root == NULL)
			return true;
		if ((root->getLeft() == NULL && root->getRight != NULL) || (root->getLeft() != NULL && root->getRight() == NULL))
			return false;
		return isFull(root->getLeft()) && isFull(root->getRight());
	}
};



