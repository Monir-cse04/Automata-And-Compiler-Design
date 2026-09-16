#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string exp;
    stack<int> s;

    cout << "Enter postfix expression: ";
    cin >> exp;

    for (int i = 0; i < exp.length(); i++) //exp theke char niye c te store korbe
    {
        char c = exp[i];
        if (isdigit(c))s.push(c - '0');
        else
        {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            if (c == '+') s.push(a + b);
            else if (c == '-') s.push(a - b);
            else if (c == '*') s.push(a * b);
            else if (c == '/') s.push(a / b);
        }
    }
    cout << "Result = " << s.top();
    return 0;
}
