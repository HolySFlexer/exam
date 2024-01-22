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

//Óäŕëĺíčĺ îňđčöŕňĺëüíűő ÷čńĺë

void DeleteOtric(Node* &head) {
	while (head != nullptr && head->Data < 0) {
		Node* tmp = head;
		head = head->next;
		delete tmp;
	}
	if (head == nullptr) return;
	Node* curr = head->next;
	Node* prev = head;
	while (curr != nullptr) {
		if (curr->Data < 0) {
			prev->next = curr->next;
			Node* tmp = curr;
			curr = curr->next;
			delete tmp;
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}
}

//ďĺđĺěĺůĺíčĺ ăîëîâű â ęîíĺö 

void Peremesheniye(Node*& head) {
	Node* tmp = head;
	int s = head->Data;
	head = head->next;
	delete tmp;
	Node* curr = head;
	while (curr->next!= nullptr) {
		curr = curr->next;
	}
	curr->next = new Node;
	curr = curr->next;
	curr->Data = s;


}
int main() {
	Node* L1;
	int n = 0;
	cin >> n;
	L1=CreateList(n);

	Peremesheniye(L1);

	PrintList(L1);
}




