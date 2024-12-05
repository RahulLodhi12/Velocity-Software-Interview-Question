#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int n, vector<int>& vec){
    int cnt=0;
    for(int it: vec){
        if(it==0) cnt++;
    }

    vector<int> ans(n);

    int k=0;
    while(cnt--){
        ans[k++]=0;
    }

    for(int it: vec){
        if(it!=0){
            ans[k++]=it;
        }
    }

    for(int it: ans){
        cout<<it<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    moveZeroes(n,vec);
}