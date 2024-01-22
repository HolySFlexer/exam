#include "Tree.h"
#include <string>
#include <fstream>

int main() {
	int tree_size = 0;
	int tree_first = 0;
	int tree_value = 0;
	TNode* delete_value = nullptr;
	std::cout << "Enter tree size" << std::endl;
	std::cin >> tree_size;
	std::cout << "Enter first tree element" << std::endl;
	std::cin >> tree_first;
	TNode* root = new TNode{ tree_first, nullptr };
	Tree tree(root);
	std::cout << "Enter other tree element" << std::endl;
	for (int i = 0; i < tree_size; i++) {
		std::cin >> tree_value;
		tree.insert(root, tree_value);
	}
	std::cout << "Enter tree element you wont delete" << std::endl;
	std::cin >> tree_value;
	
	delete_value=tree.find(root, tree_value);
	std::cout << "Tree before modify" << std::endl;
	tree.print(root, 0);
	std::cout << std::endl;
	tree.remove(root, delete_value);
	
	std::cout << "Tree after modify" << std::endl;
	tree.print(root, 0);
	return 0;
}
