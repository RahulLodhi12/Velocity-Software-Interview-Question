#include<bits/stdc++.h>
using namespace std;

void findZero(int n, int m, vector<vector<int>>& mat){
    vector<vector<int>> temp = mat;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(temp[i][j]==0){
                for(int k=0;k<n;k++){
                    mat[k][j]=0;
                }
                for(int k=0;k<m;k++){
                    mat[i][k]=0;
                }
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> mat(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    findZero(n,m,mat);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

