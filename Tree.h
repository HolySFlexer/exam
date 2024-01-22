#pragma once
#include <iostream>

struct TNode {
	int Data;
	TNode* Left;
	TNode* Right;
	TNode* Parent;
};

class Tree {
private:
	TNode* root = nullptr;
public:
	Tree(TNode* root);
	TNode* insert(TNode* root, int value);
	void print(TNode* root, int space);
	TNode* remove(TNode* root, TNode* value);
	TNode* max(TNode* root);
	TNode* find(TNode* root, int value);
};