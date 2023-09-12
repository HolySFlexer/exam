#include <iostream>
using namespace std;

void Sort(int* mass, int size) {
	int posindex = 0;
	for (int i = 0; i < size; i++) {
		if (mass[i]>0) {
			int temp = mass[i];
			mass[i] = mass[posindex];
			mass[posindex] = temp;
			posindex++;
		
		}
	}
	for (int i = 0; i < size; i++) {
		cout << mass[i] << endl;
	}
}

int main() {
	int size = 0;
	cin >> size;
	int* mass = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> mass[i];
	}
	Sort(mass, size);
}