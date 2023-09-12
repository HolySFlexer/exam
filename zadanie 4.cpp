#include <iostream>
using namespace std;

void Sort(int **matrix, int n, int m) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (matrix[j][0] > matrix[j + 1][0]) {
				for (int k = 0; k < m; k++) {
					swap(matrix[j][k], matrix[j + 1][k]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}


int main() {
	int n = 0;
	int m = 0;
	cin >> n;
	cin >> m;
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	Sort(matrix, n, m);
}