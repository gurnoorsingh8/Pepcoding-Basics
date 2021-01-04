#include<iostream>
#include<vector>
using namespace std;

void firstlast(vector<int>& arr, int num)
{
    int n = arr.size();
    int startt = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            startt = i;
            break;
        }
        else
        {
            startt = -1;
        }
        
    }
    int end = 0;
    if(startt != -1)
    {
        for(int i = startt; i < n; i++)
        {
            if(arr[i] != num)
            {
                end = i-1;
                break;                }
            }
        }
        cout << startt << endl << end << endl;
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
    firstlast(arr, num);
    return 0;
}