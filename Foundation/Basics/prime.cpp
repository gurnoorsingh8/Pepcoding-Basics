#include<iostream>
using namespace std;

bool isPrime_(int n)
{
    bool prime = true;
    for(int i = 2; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

void isPrime()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    bool ans = isPrime_(n);

    if(ans){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}

int main()
{
    int t;
    cout<<"How Many times you want to Enter?"<<endl;
    cin>>t;
    while(t-->0)
    {
        isPrime();
    }
    return 0;
}