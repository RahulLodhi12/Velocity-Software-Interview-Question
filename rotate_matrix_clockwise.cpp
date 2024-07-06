#include<bits/stdc++.h>
using namespace std;

void rotateClockwise(int n, int m, vector<vector<int>>& mat){
    int top=0,down=n-1;
    int left=0,right=m-1;
    int prev,curr;
    while(top<down && left<right){
        prev=mat[top+1][left];

        for(int i=left;i<=right;i++){
            curr=mat[top][i];
            mat[top][i]=prev;
            prev=curr;
        }
        top++;

        for(int i=top;i<=down;i++){
            curr=mat[i][right];
            mat[i][right]=prev;
            prev=curr;
        }
        right--;

        for(int i=right;i>=left;i--){
            curr=mat[down][i];
            mat[down][i]=prev;
            prev=curr;
        }
        down--;

        for(int i=down;i>=top;i--){
            curr=mat[i][left];
            mat[i][left]=prev;
            prev=curr;
        }
        left++;
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


    rotateClockwise(n,m,mat);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}