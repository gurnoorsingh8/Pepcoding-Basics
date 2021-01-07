#include<iostream>
#include<vector>
using namespace std;

void test1()
{
    int* arr = new int[10];
    for(int i = 0; i < 20;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void test2()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    cout<<"-----------------------------\n";

    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // test1();
    test2();
    return 0;
}