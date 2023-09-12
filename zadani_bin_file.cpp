#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ofstream on("binfile.bin", ios::binary);
	if (!on.is_open()) {
		cout << "Error opening file!" << endl;
		return 1;
	}
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ch;
		cin >> ch;
		on.write((char*)&ch, sizeof(int));
	}
	on.close();

	ifstream in("binfile.bin", ios::binary);

	if (!in.is_open()) {
		cout << "Error opening file!" << endl;
		return 1;
	}
	
	int countchet = 0;
	int countnechet = 0;

	int* masschet = new int[n];
	int* massnechet = new int[n];


	
	for (int i = 0; i < n; i++) {
		int num = 0;
		in.read((char*)&num, sizeof(int));
		if (num % 2 == 0) {
			masschet[countchet++] = num;
		}
		else { massnechet[countnechet++] = num; 
		}
	}
	in.close();

	for (int i = 0; i < countchet; i++) {
		cout << masschet[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < countnechet; i++) {
		cout << massnechet[i] << endl;
	}
	return 0;
}