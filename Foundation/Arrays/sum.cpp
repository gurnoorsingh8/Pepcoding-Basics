#include<iostream>
#include<vector>
using namespace std;

void sum(vector<int>& arr1, vector<int>& arr2)
{
    int p = arr1.size();
    int q = arr2.size();
    int r = max(p,q) + 1;
    vector <int> arr(r, 0);
    int i = p - 1;
    int j = q - 1;
    int k = r - 1;
    int carry = 0;

    while(k >= 0)
    {
        int sum = carry;
        if(i >= 0)
        {
            sum += arr1[i--];
        }
        if(j >=0)
        {
            sum += arr2[j--];
        }
        arr[k--] = sum % 10;
        carry = sum/10;
    }
    
    for(int l = 0; l < arr.size(); l++)
    {
        if(l==0 && arr[l]==0)
            continue;
        cout<<arr[l]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    sum(arr1, arr2);
    return 0;
}