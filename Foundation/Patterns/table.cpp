#include<iostream>
using namespace std;

void table(int num)
{
    int result;
    for(int r = 1; r <= 10; r++)
    {
        result = num * r;
        cout<<to_string(num) + " * " + to_string(r) + " = " + to_string(result)<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    table(n);
}