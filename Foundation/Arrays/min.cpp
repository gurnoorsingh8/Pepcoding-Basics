#include<iostream>
#include<vector>
using namespace std;

int minimun()
{
    int n;
    cin>>n;
    int min = 1e8;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    cout<<"minimun is "<<minimun();
    return 0;
}