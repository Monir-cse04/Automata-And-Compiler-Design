/*2.	Detection of Comments in a Line using C++.
•	For Single Line Comments
•	For Multiple Line Comment*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout<<"enter line: "<<endl;
    while (getline(cin, s))
    {
        if (s.find("//") != -1)
            cout << "Single Line Comment\n";

        else if (s.find("/*") != -1)
            cout << "Multiple Line Comment\n";

        else
            cout << "Not a Comment\n";
    }
}
