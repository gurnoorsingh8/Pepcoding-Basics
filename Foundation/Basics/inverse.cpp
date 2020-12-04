#include<iostream>
#include<math.h>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    int num = n;
    while(num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int inverse(int n)
{
    int len = countDigit(n);
    int result = 0;
    for(int i = 1; i <= len; i++)
    {
        int digit = n % 10;
        n /= 10;
        result += i * pow(10, digit-1);
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    cout<<inverse(n)<<endl;
    return 0;
}