#include<iostream>
using namespace std;

void mirrorInvertedTriangle(int row)
{
    int nst = row;
    int nsp = 0;
    for(int r = 1; r <= row; r++)
    {
        for(int csp = 0; csp < nsp; csp++)
        {
            cout<<"\t";
        }
        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<"*\t";
        }
        nst--;
        nsp++;
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    mirrorInvertedTriangle(n);
    return 0;
}