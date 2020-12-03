#include<iostream>
using namespace std;

int countdigit(int n)
{
    int count = 0;
    while(n--> 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

void printdigit(int n)
{
    int num = n;
    int len = countdigit(n);
    
    int div = 1;
    while(len --> 1)
    {
        div *= 10;
    }
    while(div != 0)
    {
        cout<<n/div<<endl;
        n = n % div;
        div /= 10;
    }
}

int main()
{
    int n;
    cin>>n;
    printdigit(n);
    return 0;
}