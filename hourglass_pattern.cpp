#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sp=0;
    int st=n;
    for(int i=0;i<=n/2;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
            sp++;
        }
        for(int k=0;k<st;k++){
            cout<<"*";
        }
        st=st-2;
        cout<<endl;
    }

    int stt=3;
    int m=0;
    for(int i=n/2;i<n-1;i++){
        for(int j=n/2-m-1;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<stt;k++){
            cout<<"*";
        }
        stt+=2;
        m++;
        cout<<endl;
    }
}