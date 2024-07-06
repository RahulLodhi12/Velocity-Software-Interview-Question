#include<bits/stdc++.h>
using namespace std;

void transpose(int n, int m, vector<vector<int>>& mat){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> mat(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    transpose(n,m,mat);

    for(int i=0;i<mat[0].size();i++){
        for(int j=0;j<mat.size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}