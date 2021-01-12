#include<iostream>
#include<vector>
using namespace std;

void span(vector<int>& arr)
{
    int max = -1e8;
    int min = 1e8;
    int result;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    result = max - min;
    cout<<result;
}

int main()
{
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    span(arr);
    return 0;
}