#include<iostream>
using namespace std;

int countdigits(int n)
{
    int count = 0;
    int num = n;
    while(num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int rotate(int n, int r)
{
    int len = countdigits(n);
    r = r % len;
    if(r < 0)
    {
        r = (r + len) % len;

    }
    int mul = 1, div = 1;
    for(int i = 1; i <= len; i++)
    {
        if(i <= r)
        {
            mul *= 10;
        }
        else
        {
            div *= 10;
        }
    }

    int a = n % div;
    int b = n / div;

    return a * mul + b;
}

int main()
{
    int n, r;
    cin>>n;
    cin>>r;
    cout<<rotate(n, r);
    return 0;
}