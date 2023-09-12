#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> VectorMin(int** matr, int n, int m) {
	vector<int> v;
	for (int j = 0; j < m; j++) {
		int min = matr[0][j];
		for (int i = 0; i < n; i++) {
			if (matr[i][j] < min) {
				min = matr[i][j];
			}
		}
		v.push_back(min);
	}
	ofstream f2("NewFile.txt");
	for (int i = 0; i < v.size(); i++) {
		f2 << v[i] << endl;
	}
	
	return v;
}





int main() {
	ifstream f1("FileName.txt");
	string line;
	getline(f1, line);
	stringstream ss(line);
	string token;
	getline(ss, token, ' ');
	int n = stoi(token); 
	getline(ss, token, ' ');
	int m = stoi(token);
	int** matr = new int* [n];
	for (int i = 0; i < n; i++) {
		matr[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		getline(f1, line);
		stringstream ss(line);
		for (int j = 0; j < m; j++) {
			getline(ss, token, ' ');
			matr[i][j] = stoi(token);
		}

	}
	f1.close();
		
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matr[i][j] << ' ';
		}
		cout << endl;
	}

	VectorMin(matr, n, m);

	


	for (int i = 0; i < n; i++) {
		delete[] matr[i];
	}
	delete[] matr;
	return 0;
}