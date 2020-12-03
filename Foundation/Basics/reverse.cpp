#include<iostream>
using namespace std;

void printReverse(int n)
{
    int num = n;
    while(num != 0)
    {
        cout<<num % 10<<endl;
        num /= 10;
    }
}

int main()
{
    int n;
    cin>>n;
    printReverse(n);
    return 0;
}
