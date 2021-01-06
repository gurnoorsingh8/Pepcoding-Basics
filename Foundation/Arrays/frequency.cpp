// #include<iostream>
// #include<vector>
// using namespace std;

// void freq(vector<int>& arr)
// {
//     int num;
//     cin >> num;
//     int count = 0;
//     for(int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i] == num)
//         {
//             count++;
//         }
//     }
//     cout<<count;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < arr.size(); i++)
//     {
//         cin>>arr[i];
//     }
//     freq(arr);
//     return 0;
// }
#include<iostream>
using namespace std;

int freq(int num, int data)
{
    int count = 0;
    int mod;
    while(num > 0)
    {
        mod = num % 10;
        if(mod == data)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main()
{
    int num, data;
    cin>>num;
    cin>>data;
    cout<<freq(num, data);
    return 0;
}