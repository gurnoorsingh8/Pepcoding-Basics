#include<iostream>
using namespace std;

void diamond(int row)
{
    int nst = 1;
    int nsp = (row/2);
    for(int r = 1; r <= row; r++)
    {
        for(int csp = 1; csp <= nsp; csp++)
        {
            cout<<" ";
        }
        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<"*";
        }
        if(r <= row/2)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    cin>>row;
    diamond(row);
    return 0;
}