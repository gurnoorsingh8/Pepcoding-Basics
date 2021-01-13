#include<iostream>
#include<vector>

using namespace std;

void differenceOfTwoArrays(vector<int>& arr1, vector<int>& arr2){
    int p = arr1.size();
    int q = arr2.size();
    int r=p;

    vector<int> ans(r,0);
    int i=p-1, j=q-1, k=r-1, borrow=0;
    while(k >= 0){
        int num = borrow;

        if(i >= 0) num += arr1[i--];
        if(j >= 0) num -= arr2[j--];

        if(num<0){
            num += 10;
            borrow = -1;
        }
        else borrow = 0;

        ans[k--] = num;
    }

    bool flag = false;
    for(int l=0; l<ans.size(); l++){
        if(!flag && ans[l] == 0) continue;
        cout<< ans[l]<<endl;
        flag=true;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cin>>m;
    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    differenceOfTwoArrays(arr2,arr1);
    return 0;
}