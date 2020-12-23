#include<iostream>
using namespace std;

void binomial(int row)
{
    // int val = 1;
    for(int n = 0; n < row; n++)
    {
        int val = 1;
        for(int r = 0; r <= n; r++)
        {
            cout<<to_string(val) + "\t";
            val = ((n - r) * val) / (r + 1);
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    binomial(n);
    return 0;
}