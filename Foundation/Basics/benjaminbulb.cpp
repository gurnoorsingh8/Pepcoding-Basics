#include<iostream>
using namespace std;

void benjbulb(int n)
{
    for(int i= 1; i * i < n; i++)
    {
        cout<<i*i<<endl;

    }
}
int main()
{
    int n;
    cin>>n;
    benjbulb(n);
    return 0;
}