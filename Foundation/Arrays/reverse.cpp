#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& arr)
{
    int i = 0;
    int j = arr.size() - 1;
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    for(int k = 0; k < arr.size(); k++)
    {
        cout<<arr[k];
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rotate(arr);
    return 0;
}