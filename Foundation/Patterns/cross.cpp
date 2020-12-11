#include<iostream>
using namespace std;

void printCross(int row)
{
    for(int i = 1; i <= row; i++)
    {
        
        for(int j = 1; j <= row; j++)
        {
            if(i == j || i+j == row+1)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    printCross(n);
    return 0;
}