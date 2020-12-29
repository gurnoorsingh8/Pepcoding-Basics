#include<iostream>
using namespace std;

int decimalToAnyBase(int n, int b)
{
    int pow = 1, res = 0;
    while(n != 0)
    {
        int rem = n % b;
        n /= b;
        res += rem * pow;
        pow *= 10;
    }
    return res;
}

int main()
{
    int n, b;
    cin>>n;
    cin>>b;
    cout<<decimalToAnyBase(n, b);
    return 0;
}