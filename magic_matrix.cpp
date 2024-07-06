#include<bits/stdc++.h>
using namespace std;

bool isMagicMatrix(int n, vector<vector<int>>& mat){
    int sd1=0;
    int sd2=0;
    for(int i=0;i<n;i++){
        sd1+=mat[i][i];
        sd2+=mat[i][n-i-1];
    }
    if(sd1!=sd2) return false;

    for(int i=0;i<n;i++){
        int rsum=0,csum=0;
        for(int j=0;j<n;j++){
            rsum+=mat[i][j];
            csum+=mat[j][i];
        }
        if(rsum!=csum || rsum!=sd1) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> mat(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    cout<<isMagicMatrix(n,mat);
}
