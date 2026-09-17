#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    // Insertion Sort
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) //a[j] > key → আগের element বড় হলে সেটাকে ডানে সরাবে
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key; // শেষে key-কে সঠিক জায়গায় বসাবে
    }

    cout << "Sorted elements: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
