#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>& arr)
{
    int data;
    cout<<"Enter data";
    cin>>data;
    int index = -1;
    for(int i = 0; i < arr.size(); i ++)
    {
        if(arr[i] == data)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    cout<<find(arr);
    return 0;
}