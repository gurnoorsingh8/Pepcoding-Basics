#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    int divisior = a;
    int dividend = b;

    while(dividend % divisior != 0)
    {
        int rem = dividend % divisior;
        dividend = divisior;
        divisior = rem;
    }
    return divisior;
}

int lcm(int a, int b, int gcd)
{
    return ((a/gcd) * b);
}

int main()
{
    int a, b;
    cin>>a>>b;
    int gcd = GCD(a, b);
    cout<<gcd<<endl;
    cout<<lcm(a, b, gcd)<<endl;
    return 0;
}