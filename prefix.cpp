#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int main()
{
    string exp;
    stack<int> s;

    cin >> exp;

    for(int i = exp.length()-1; i >= 0; i--)
    {
        char c = exp[i];

        if(isdigit(c))
            s.push(c-'0');
        else
        {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();

            if(c == '+') s.push(a+b);
            else if(c == '-') s.push(a-b);
            else if(c == '*') s.push(a*b);
            else if(c == '/') s.push(a/b);
        }
    }

    cout << s.top();

    return 0;
}
