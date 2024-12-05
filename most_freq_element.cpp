#include<bits/stdc++.h>
using namespace std;

int mostFreq(int n, int m, vector<int>& a1, vector<int>& a2){
    // unordered_map<int,int> mpp;
    int maxE=INT_MIN;
    for(int it: a1){
        maxE = max(maxE,it);
    }

    vector<int> freq(maxE+1,0);

    for(int it: a1){
        freq[it]++;
    }

    int maxi=INT_MIN;
    int ans=-1;
    for(int it: a2){
        if(freq[it]>maxi){
            maxi=freq[it];
            ans=it;
        }
    }

    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> a1(n);
    vector<int> a2(m);

    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }


    cout<<mostFreq(n,m,a1,a2);
}