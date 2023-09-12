#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("text.txt");
    if (file.is_open()) {
        file << "Hello, world!" << endl;
        file << "This is a new line." << endl;
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}




#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("text.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}





#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("numbers.txt");
    if (file.is_open()) {
        file << 10 << endl;
        file << 20 << endl;
        file << 30 << endl;
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}





#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("numbers.txt");
    if (file.is_open()) {
        int number;
        while (file >> number) {
            cout << number << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}