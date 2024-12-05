#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k=1;
    for(int i=0;i<n;i++){
        cout<<" ";
    }
    cout<<k++<<endl;

    for(int i=0;i<n-1;i++){
        int sp=n/2;
        for(int j=sp;j>0;j--){
            cout<<" ";
        }
        sp--;

        cout<<k++;

        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        cout<<k++;

        cout<<endl;
    }
}