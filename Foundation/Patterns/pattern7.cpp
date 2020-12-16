#include<iostream>
using namespace std;

void patter7(int row)
{
    int nsp = 0;
    for(int r = 1; r <= row; r++)
    {

        for(int csp = 1; csp <= nsp; csp++)
        {
            cout<<"\t";
        }
        cout<<"*\t";

        cout<<endl;
        nsp++;
    }
}

int main()
{
    int n;
    cin>>n;
    patter7(n);
    return 0;
}