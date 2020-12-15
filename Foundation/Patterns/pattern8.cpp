#include<iostream>
using namespace std;

void pattern8(int row)
{
    int nsp = row-1;
    for(int r = 1; r <= row; r++)
    {
        for(int csp = 1; csp <= nsp; csp++)
        {
            cout<<"\t";
        }
        cout<<"*\t"<<endl;
        nsp--;
    }
}

int main()
{
    int n;
    cin>>n;
    pattern8(n);
    return 0;
}