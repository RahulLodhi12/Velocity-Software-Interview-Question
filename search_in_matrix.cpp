#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(int n, vector<vector<int>>& mat, int x){
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(mat[i][j]==x){
            cout<<i<<" "<<j<<endl;
            return true;
        }
        else if(mat[i][j]>x) j--;
        else if(mat[i][j]<x) i++;
    }
    return false;
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

    int x;
    cin>>x;

    cout<<searchMatrix(n,mat,x);
}