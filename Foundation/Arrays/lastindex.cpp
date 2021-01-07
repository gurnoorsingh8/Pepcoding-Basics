#include<iostream>
#include<vector>
using namespace std;

int lastIndex(vector<int>& arr)
{
    int num;
    cin>>num;
    int index = -1;
    for(int i = arr.size(); i > 0; i--)
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
    cout<<lastIndex(arr);
    return 0;
}