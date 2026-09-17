#include <iostream>
using namespace std;

string p[10];
int n;

void FIRST(char c) {
    for(int i=0; i<n; i++) {
        if(p[i][0] == c) {
            char x = p[i][2];

            if(!isupper(x))
                cout << x << " ";

            else
                FIRST(x);
        }
    }
}

int main() {
    cout << "Enter number of productions: ";
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> p[i];

    for(int i=0; i<n; i++) {
        cout << "FIRST(" << p[i][0] << ") = { ";
        FIRST(p[i][0]);
        cout << "}\n";
    }

    return 0;
}
/*input:
    3
E=TR
T=i
R=+*/
