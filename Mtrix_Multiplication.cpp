#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2;
    cout<<"enter row and col of matrix A:";
    cin>>r1>>c1;
    cout<<"enter row and col of matrix B:";
    cin>>r2>>c2;
    if(r2!=c1){
        cout << "Matrix multiplication is not possible.";
    return 0;
    }

    cout<<"enter matrix A: "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"enter matrix B: ";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>b[i][j];
        }
    }

    //multiplication
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout << "Result Matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

}
