#include<iostream>
using namespace std;

void printfibo(int n)
{
    int a = 0;
    int b = 1;
    for(int i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        int sum = a + b;
        a = b;
        b = sum;
    }
}

int main()
{
    int n;
    cout<<"Enter a Number";
    cin>>n;
    printfibo(n);
    return 0;
}