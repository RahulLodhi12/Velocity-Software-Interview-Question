#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1) return n;

    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin>>n;

    int num= n*(n+1)/2 - 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fib(num--)<<" ";
        }
        cout<<endl;
    }
}