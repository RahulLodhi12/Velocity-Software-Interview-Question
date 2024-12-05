#include<bits/stdc++.h>
using namespace std;

// unordered_map<int,int> mpp;

    // for(int i=0;i<n;i++){
    //     mpp[a1[i]]=i;
    // }
    
    // for(auto it: mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // // cout<<end;
    // for(int i=0;i<m;i++){
    //     if(mpp.find(a2[i])!=mpp.end()){
    //         if(i>mpp[a2[i]]){
    //             return false;
    //         }
    //         else{
    //             mpp[a2[i]]=i;
    //         }
    //     }
    //     else{
    //         return false;
    //     }
    // }
    // return true;

bool isSame1(int n, int m, vector<int>& a1, vector<int>& a2){
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[a1[i]]=i;
    }
    
    // for(auto it: mpp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // cout<<end;
    for(int i=0;i<m;i++){
        if(mpp.find(a2[i])!=mpp.end()){
            if(i>mpp[a2[i]]){
                return false;
            }
            else{
                mpp[a2[i]]=i;
            }
        }
        else{
            return false;
        }
    }
    return true;
}

bool isSame(int n, int m, vector<int>& a1, vector<int>& a2){
    
    int maxE1=INT_MIN;
    for(int it: a1){
        maxE1 = max(maxE1,it);
    }

    int maxE2=INT_MIN;
    for(int it: a2){
        maxE2 = max(maxE2,it);
    }

    vector<int> freq1(maxE1+1,0);
    vector<int> freq2(maxE2+1,0);

    for(int it: a1){
        freq1[it]++;
    }

    for(int it: a2){
        freq2[it]++;
    }
    
    for(int i=0;i<=maxE2;i++){
        if(freq2[i]!=0 && freq2[i]>freq1[i]) {
            cout<<freq2[i]<<endl;
            return false;
        }
    }

    bool found=false;
    for(int i=0;i<m;i++){
        found=false;
        for(int j=0;j<n;j++){
            if(a2[i]==a1[j]){
                found=true;
                if(i>j) return false;
                break;
            }
        }
        if(found==false) return false;
    }
    return true;
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

    cout<<isSame1(n,m,a1,a2);
}