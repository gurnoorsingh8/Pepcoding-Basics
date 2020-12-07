#include<iostream>
using namespace std;

void printmirrorTriangle(int row)
{
    int nst = 1;
    int nsp = row-1;
    for(int r = 1; r <= row; r++)
    {
        for(int csp = 1; csp <= nsp; csp++)
        {
            cout<<"\t";
        }
        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<"*\t";
        }
        nst++;
        nsp--;
        cout<<endl;
    }
}

int main()
{
    int row;
    cin>>row;
    printmirrorTriangle(row);
    return 0;
}