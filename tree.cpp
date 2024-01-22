#include "Tree.h"

Tree::Tree(TNode* root_x) {
	root = root_x;
}

TNode* Tree::insert(TNode* root, int value) {
	if (root == nullptr) {
		root = new TNode{ value, nullptr, nullptr, nullptr };
	}
	if (value < root->Data) {
		root->Left = insert(root->Left, value);
		root->Left->Parent = root;
	}
	else if (value > root->Data) {
		root->Right = insert(root->Right, value);
		root->Right->Parent = root;
	}
	return root;
}



void Tree::print(TNode* root, int space) {
	if (!root)
		return;
	enum { COUNT = 2 };
	space += COUNT;
	print(root->Right, space);
	for (int i = COUNT; i < space; ++i)
		std::cout << " ";
	std::cout<< root->Data<< std::endl;
	print(root->Left, space);
}

TNode* Tree::remove(TNode* root, TNode* value) {
	if (root == nullptr) {
		return root;
	}
	if (value->Data < root->Data) {
		root->Left = remove(root->Left, value);
	}
	else if (value->Data > root->Data) {
		root->Right = remove(root->Right, value);
	}
	else {
		if (root->Left == nullptr) {
			TNode* tmp = root->Right;
			delete root;
			return tmp;
		}
		else if (root->Right == nullptr) {
			TNode* tmp = root->Left;
			delete root;
			return tmp;
		}
		TNode* tmp = max(root->Left);
		root->Data = tmp->Data;
		root->Left = remove(root->Left, tmp);
	
	}
	return root;
}

TNode* Tree::max(TNode* root) {
	TNode* curr = root;
	while (curr->Right != nullptr) {
		curr = curr->Right;
	}
	return curr;
}

TNode* Tree::find(TNode* root, int value) {
	TNode* curr = root;
	while (curr && curr->Data != value) {
		if (value < curr->Data) {
			curr = curr->Left;
		}
		else {
			curr = curr->Right;
		}
	}
	return curr;
}
