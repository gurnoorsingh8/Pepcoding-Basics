#include<iostream>
using namespace std;

void hollowdiamond(int row)
{
    int nst = (row+1)/2;
    int nsp = 1;
    for(int r = 1; r <= row; r++)
    {
        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<"*";
        }
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
            nsp += 2;
            nst--;
        }
        else
        {
            nsp -= 2;
            nst++;
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    cin>>row;
    hollowdiamond(row);
    return 0;
}