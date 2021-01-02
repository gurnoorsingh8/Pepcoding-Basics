#include<iostream>
#include<vector>
using namespace std;

int firstIndex(vector<int>& arr)
{
    int num;
    cin>>num;
    int index = -1;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == num)
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
    for(int i = 0; i< arr.size(); i++)
    {
        cin>>arr[i];
    }
    cout<<firstIndex(arr);
    return 0;
}