#include<iostream>
#include<vector>
using namespace std;

void max(vector<int>& arr)
{
    int max = -1e8;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"Maximun is "<<max;
}

int main()
{
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 1; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    max(arr);
    return 0;
}