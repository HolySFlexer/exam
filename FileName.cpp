#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("FileName.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            int number;
            while (ss >> number) {
                cout << number << endl;
            }
        }
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}