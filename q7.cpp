#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x=-1;
    int spp=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<spp;j++){
            cout<<" ";
        }
        spp/=2;
        for(int k=0;k<i+1;k++){
            if(i==0) break;
            if(k==0){
                cout<<x;
                continue;
            }
            cout<<"*";
        }
        x+=3;
        cout<<endl;
    }


}