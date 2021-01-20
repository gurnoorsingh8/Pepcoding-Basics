#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr)
{
    int num;
    cin >> num;
    int si = 0;
    int ei = arr.size() - 1;
    while(si <= ei)
    {
        int mid = (si + ei)/2;
        if(arr[mid] == num)
        {
            return mid;
        }
        else if(arr[mid] > num)
        {
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
    }
    return -1;


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
    cout<<binarySearch(arr);
    return 0;
}