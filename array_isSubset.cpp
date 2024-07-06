#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>& a1, vector<int>& a2){
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());

    int n=a1.size(), m=a2.size();
    int i=0,j=0;

    while(i<n && j<m){
        if(a1[i]<a2[j]){
            i++;
        }
        else if(a1[i]==a2[j]){
            i++;
            j++;
        }
        else{
            return false;
        }
    }

    return j==m;
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

    cout<<isSubset(a1,a2);
}