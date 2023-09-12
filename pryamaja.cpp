#include <iostream>
using namespace std;

struct Tocka {
	int x = 0;
	int y = 0;
};

int main() {
	Tocka *tochka1 = new Tocka;
	cin >> tochka1->x;
	cin >> tochka1->y;
	Tocka* tochka2 = new Tocka;
	cin >> tochka2->x;
	cin >> tochka2->y;
	if (tochka1->x == tochka2->x) {
		cout << "paralelno osi y";
	}
	else if (tochka1->y == tochka2->y) {
		cout << "paralelno osi x";
	}
}