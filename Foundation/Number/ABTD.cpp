#include<iostream>
using namespace std;

long anyBaseToDecimal(int n, int b)
{
    long res = 0, pow = 1;
    while(n != 0)
    {
        int rem = n % 10;
        n /= 10;

        res += rem * pow;
        pow *= b;
    }
    return res;
}

int main()
{
    int n, b;
    cin>>n;
    cin>>b;
    cout<<anyBaseToDecimal(n, b);
    return 0;
}