#include <iostream>
using namespace std;

int main()
{
    int n, search;

    cout << "Enter number of inputs: ";
    cin >> n;

    int a[n];

    cout << "Enter sorted numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to search: ";
    cin >> search;

    int low = 0, high = n - 1;
    int position = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == search)
        {
            position = mid + 1;   // Position starts from 1
            break;
        }
        else if (a[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (position != -1)
        cout << "Search value found at position: " << position << endl;
    else
        cout << "Search value not found." << endl;
    return 0;
}
