#include<iostream>
#include<vector>
using namespace std;

int inverse(int[] arr)
{
    int n = arr.size();
    vector<int> ans(n);
    for(int i = 1; i < n; i++)
    {
        ans[arr[i]] = i;
    }
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
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
    inverse(arr);
}