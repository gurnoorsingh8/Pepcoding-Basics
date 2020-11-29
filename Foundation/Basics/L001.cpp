#include<iostream>
using namespace std;

void printHelloworld()
{
    cout<<"Hello World"<<endl;
    cout<<"This is Gurnoor"<<endl;
}

void workWithDataType()
{
    int a = 10;
    int b = 20;

    // cout<<"Value of A "<< a <<endl;
    // cout<<"Value of B "<< b <<endl;

    cout<<"Value of A " + to_string(a) << endl;
    cout<<"Value of B " + to_string(b) << endl;
}

int main()
{
    printHelloworld();
    workWithDataType();
    return 0;
}