#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        int x=2*i+3;
        for(int k=0;k<=i;k++){
            if(i==0) x=x-2;
            cout<<x;
            if(i!=0) x=x-2;
        }
        x = x+4;
        for(int k=0;k<i;k++){
            cout<<x;
            x=x+2;
        }
        cout<<endl;
    }
}