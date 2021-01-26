#include<iostream>
using namespace std;

int anyBaseAddition(int n,  int m, int b)
{
    int res = 0, pow = 1, carry = 0;
    while(n != 0 || m != 0 || carry != 0)
    {
        int r1 = n % 10;
        int r2 = m % 10;
        n /= 10;
        m /= 10;
        int sum = r1 + r2 + carry;
        int r = sum % b;
        carry = sum / b;

        res += r * pow;
        pow *= 10;  
    }
    return res;
}

int main()
{
    int n, m, b;
    cin>>n>>m>>b;
    cout<<anyBaseAddition(n, m, b);
    return 0;
}