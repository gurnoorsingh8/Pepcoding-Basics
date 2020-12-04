#include<iostream>
using namespace std;

void printTriangle(int row)
{
    int nst = 1;
    for(int r = 1; r <= row; r++)
    {
        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<"*\t";
        }
        nst++;
        cout<<endl;
    }
}

int main()
{
    int row;
    cin>>row;
    printTriangle(row);
    return 0;
}
