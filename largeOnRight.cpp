#include<bits/stdc++.h>
using namespace std;

void largeOnRight(vector<int>& arr, int n){
    vector<int> right(n);
    right[n-1]=0;

    //iterate
    for(int i=n-2;i>=0;i--){
        right[i] = max(right[i+1],arr[i+1]);
    }

    //copy
    for(int i=0;i<n;i++){
        arr[i] = right[i];
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    largeOnRight(arr,n);

    for(int it: arr){
        cout<<it<<" ";
    }
}