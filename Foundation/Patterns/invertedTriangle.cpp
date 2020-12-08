#include<iostream>
using namespace std;

void printInvertedTriangle(int row)
{
    int nst = row;
    for(int r = 1; r <= row; r++)
    {
        for(int csp = 1; csp <= nst; csp++)
        {
            cout<<"*\t";
        }
        nst--;
        cout<<endl;
    }
}

int main()
{
    int row;
    cin>>row;
    printInvertedTriangle(row);
    return 0;
}