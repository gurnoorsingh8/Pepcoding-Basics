#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(vector<int>& arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}     
 
/* Utility function to print an array */
void printArray(vector<int>& arr, int size)
{
   for (int i = 0; i < size; i++)
   {
        cout << arr[i] << " ";
   }
} 
 
/* Driver function to test above functions */
int main() 
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    int i;
    cin >> i;
    int j;
    cin >> j;

    rvereseArray(arr, i, j);

    for(int k = 0; k < n; k++)
    {
        cout << arr[k];
    }
     
    return 0;
}