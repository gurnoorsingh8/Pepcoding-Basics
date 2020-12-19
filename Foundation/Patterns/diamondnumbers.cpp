#include<iostream>
using namespace std;

void diamondnumbers(int row)
{
    int nst = 1;
    int nsp = (row/2);
    for(int r = 1; r <= row; r++)
    {
        for(int csp = 1; csp <= nsp; csp++)
        {
            cout<<" ";
        }

        int count = r;
        if(r > (row/2) + 1)
        {
            count = (row - r + 1);
        }

        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<count;
            if(cst <= nst/2)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        if(r <= row/2)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    cin>>row;
    diamondnumbers(row);
    return 0;
}