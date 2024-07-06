#include<bits/stdc++.h>
using namespace std;

vector<int> peakElement(int n, int m, vector<vector<int>> mat){
    vector<int> res;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //top
            if(i>0 && mat[i][j]<mat[i-1][j])
                continue;

            //bottom
            if(i+1<n && mat[i][j]<mat[i+1][j])
                continue;

            //left
            if(j>0 && mat[i][j]<mat[i][j-1])
                continue;

            //right
            if(j+1<m && mat[i][j]<mat[i][j+1])
                continue;

            res.push_back(i);
            res.push_back(j);
            break;
        }
    }
    return res;
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
    
    vector<int> res = peakElement(n,m,mat);
    cout<<res[0]<<" "<<res[1];

    return 0;
}