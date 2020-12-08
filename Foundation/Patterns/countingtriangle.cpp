#include<iostream>
using namespace std;

void countTriangle(int row)
{
    int nst = 1;
    int count = 1;
    for(int r = 1; r <= row; r++)
    {
        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<count<<"\t";
            count++;
        }
        
        nst++;
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    countTriangle(n);
    return 0;
}