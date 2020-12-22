#include<iostream>
using namespace std;

void countTriangle(int row)
{
    int nst = 1;
    int a = 0;
    int b = 1;
    for(int r = 1; r <= row; r++)
    {
        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<a<<"\t";
            int sum = a +b;
            a = b;
            b = sum;
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