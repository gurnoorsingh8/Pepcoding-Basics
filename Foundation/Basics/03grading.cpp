#include<iostream>
using namespace std;

void gradingSystem(int n)
{
    if(n > 90){
        cout<<"excellent"<<endl;
    }
    else if(n > 80){
        cout<<"good"<<endl;
    }
    else if(n > 70){
        cout<<"fair"<<endl;
    }
    else if(n > 60){
        cout<<"meets expectations"<<endl;
    }
    else{
        cout<<"below par"<<endl;
    }
}

int main()
{
    int marks;
    cout<<"Enter Marks"<<endl;
    gradingSystem(marks)
    return 0
}