#include <iostream>
#include <vector>
using namespace std;

void pattern(int row)
{
    int nst = 1;
    int nsp = row*2 - 3;
    for(int r = 1; r <= row; r++)
    {
        int count = 1;

        for(int cst = 1; cst <= nst; cst++)
        {
            cout<<count<<"\t";
            if(cst < row)
            {                            
                count++;
            }
        }
        for(int csp = 1; csp <= nsp; csp++)
        {
            cout<<"\t";
        }
        for(int cst = 1; cst <= nst; cst++)
        {
            --count;
            if(count > 0)
            {
                cout<<count<<"\t";
            }
        }
        cout<<endl;
        nst++;
        nsp -= 2;
    }
}

int main()
{  
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
