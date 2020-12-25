#include<iostream>
using namespace std;

void pattern10(int row)
{
    int nsp1 = row/2;
    int nsp2 = -1;
    for(int r = 1; r <= row; r++)
    {
        for(int csp = 1; csp <= nsp1; csp++)
        {
            cout<<"\t";
        }
        cout<<"*\t";
        
        for(int csp = 1; csp <= nsp2; csp++)
        {
            cout<<"\t";
        }
        
        if(nsp2 != -1)
        {
            cout<<"*\t";
        }

        cout<<endl;

        if(r <= row/2)
        {
            nsp1--;
            nsp2 += 2;
        }
        else
        {
            nsp1++;
            nsp2 -= 2;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    pattern10(n);
    return 0;
}