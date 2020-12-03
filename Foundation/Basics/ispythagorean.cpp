#include<iostream>
using namespace std;

bool ispythagorean(int a, int b, int c)
{
    if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))
    return true;
    return false;
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<(boolalpha)<<ispythagorean(a, b, c)<<endl;
}