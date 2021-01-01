#include<iostream>
#include<vector>
using namespace std;

void diff(vector<int>& arr1, vector<int>& arr2)
{
    int p = arr1.size();
    int q = arr2.size();
    int r = p;

    vector<int> arr(r,0);

    int i = p - 1;
    int j = q - 1;
    int k = r - 1;
    int borrow = 0;

    while(k >= 0)
    {
        int num = borrow;
        if(i >= 0)
        {
            num += arr1[i--];
        }
        if(j >= 0)
        {
            num -= arr2[j--];
        }
        if(num < 0)
        {
            num += 10;
            borrow = -1;
        }
        else
        {
            borrow = 0;
        }

        arr[k--] = num;
    }

    bool flag = false;
    for(int l = 0; l < r; l++)
    {
        if(!flag && arr[l] == 0)
        {
            continue;
        }
        cout<<arr[l]<<endl;
        flag = true;
    }
}

int main()
{
    int n;
    cin>> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    diff(arr1, arr2);
}