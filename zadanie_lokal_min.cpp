#include <iostream>
using namespace std;


int main() {
	int count = 0;
	int size = 0;
	cin >> size;
	int* mass = new int[size];
	for (int i = 0; i < size ; i++) {
		cin >> mass[i];
	}
	for (int i = 1; i < size - 1; i++) {
		if ((mass[i - 1] > mass[i]) && (mass[i] < mass[i + 1])) {
			count++;
		}
	}
	cout << "Kolvo minimumov: " << count;
}