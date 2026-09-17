#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of productions: ";
    cin >> n;

    string p;

    for (int i = 0; i < n; i++) {
        cout << "Enter production (e.g. E->E+T): ";
        cin >> p;

        char lhs = p[0];
        int pos = p.find("->");

        string rhs = p.substr(pos + 2);

        if (rhs[0] == lhs)
            cout << "Left Recursive: " << p << endl;
        else
            cout << "Not Left Recursive: " << p << endl;
    }

    return 0;
}
