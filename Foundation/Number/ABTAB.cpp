#include<iostream>
using namespace std;

int anyBaseToAnyBase(int n, int b1, int b2)
{
    int res = 0, pow = 1;
    while(n != 0)
    {
        int rem = n % 10;
        n /= 10;

        res += rem * pow;
        pow *= b1;
    }
    int pow2 = 1, res2 = 0;
    while(res != 0)
    {
        int rem2 = res % b2;
        res /= b2;
        
        res2 += rem2 * pow2;
        pow2 *= 10;
    }
    return res2;
}

int main()
{
    int n, b1, b2;
    cin>>n>>b1>>b2;
    cout<<anyBaseToAnyBase(n, b1, b2);
    return 0;
}