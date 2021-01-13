#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i; j < arr.size(); j++)
        {
            for(int k = i; k <= j; k++)
            {
                cout<<arr[k]<<"\t";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    subarray(arr);
    return 0;
}