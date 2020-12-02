#include<iostream>
using namespace std;

void countdigits(int n)
{
    int count = 0;
    int num = n;
    while(num > 0)
    {
        num /= 10;
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    int n;
    cin>>n;
    countdigits(n);
    return 0;
}