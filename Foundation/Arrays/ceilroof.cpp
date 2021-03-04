#include<iostream>
#include<vector>
using namespace std;

void ceilroof(vector<int>& arr, int num)
{
    int n = arr.size();
    for(int i = 0; i < n; i++)
    {
        if(num > arr[i] && num < arr[i+1])
        {
            cout<<arr[i+1];
            cout<<arr[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    ceilroof(arr, num);
}