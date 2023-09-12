#include <iostream>
using namespace std;

struct Node{
	int Data;
	Node* next = nullptr;
};

Node* CreateList(int n) {
	Node* head = new Node;
	cout << "Vvedite elementi" << endl;
	cin >> head->Data;
	Node* curr = head;
	for (int i = 0; i < n-1; i++) {
		curr->next = new Node;
		curr = curr->next;
		cin >> curr->Data;
	}
	return head;
}

void PrintList(Node* head) {
	Node* curr = head;
	while (curr!=nullptr) {
		cout << curr->Data << endl;
		curr = curr->next;
	}
}


void DeleteList(Node* head) {
	Node* curr = head;
	while (curr!= nullptr) {
		Node* tmp = curr->next;
		delete curr;
		curr = tmp;
	}
}


int main() {
	Node* L1;
	int n = 0;
	cin >> n;
	L1=CreateList(n);
	PrintList(L1);
	DeleteList(L1);
}