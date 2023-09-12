#include <iostream>
using namespace std;


bool Bukva(char bukva) {
	if (44 < bukva < 122) {
		return true;
	}
	else {
		return false;
	}

}
int main() {
	char bukva;
	cin >> bukva;
	cout<< Bukva(bukva);

 }
