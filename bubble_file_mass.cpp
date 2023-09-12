#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void BubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	ofstream on("file.txt");
	if (!on.is_open()) {
		cout << "error" << endl;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		on << num << endl;
	}
	on.close();

	ifstream in("file.txt");
	if (!in.is_open()) {
		cout << "error" << endl;
	}
	int* mass = new int[n];
	string line;
	int counter = 0;
	while (getline(in, line)) {
		if (stoi(line) % 2 == 1) {
			mass[counter++] = stoi(line) * 2;
		}
		else {
			mass[counter++] = stoi(line);
		}
	}


	BubbleSort(mass, n);
	cout << endl;
	
	for (int i = 0; i < n; i++) {
		cout << mass[i] << endl;
	}
}