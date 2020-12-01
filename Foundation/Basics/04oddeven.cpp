#include<iostream>
using namespace std;

void oddEven(int n)
{
    if(n % 2 == 0){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    oddEven(num);
    return 0;
}