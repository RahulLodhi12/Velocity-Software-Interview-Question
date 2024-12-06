#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int mid = n/2;

    sort(vec.begin(), vec.end());

    sort(vec.begin()+mid, vec.end(), greater<int>());

    for(int it: vec){
        cout<<it<<" ";
    }

}