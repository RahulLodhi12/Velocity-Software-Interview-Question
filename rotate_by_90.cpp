#include<bits/stdc++.h>
using namespace std;

// steps
//1. transpose
//2. reverse rows

void rotate90(vector<vector<int>>& mat){
    //transpose
    vector<vector<int>> trans(mat[0].size(),vector<int>(mat.size()));
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            trans[j][i] = mat[i][j];
        }
    }

    //reverse rows
    vector<vector<int>> res(trans.size());
    for(int i=0;i<trans.size();i++){
        res[i] = vector<int>(trans[i].rbegin(),trans[i].rend());
    }

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
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

    rotate90(mat);
}