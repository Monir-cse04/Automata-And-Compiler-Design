#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str, token;

    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);

    cout << "Tokens are:" << endl;

    while (ss >> token) {
        cout << token << endl;
    }

    return 0;
}
