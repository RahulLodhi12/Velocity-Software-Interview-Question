#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    //with map
    // unordered_map<int,int> mpp;

    // for(int i: vec){
    //     mpp[i]++;
    // }

    // for(auto i: mpp){
    //     cout<<i.first<<" : "<<i.second<<endl;
    // }


    //without map - without freq array
    sort(vec.begin(),vec.end());

    int cnt=1;

    for(int i=1;i<=n;i++){
        if(i<n and vec[i]==vec[i-1]){
            cnt++;
        }
        else{
            cout<<vec[i-1]<<" "<<cnt<<endl;
            cnt=1;
        }
    }


    //without map - with freq array
    int maxi=-1;
    for(int i: vec){
        maxi = max(maxi,i);
    }

    vector<int> freq(maxi+1,0);

    for(int i: vec){
        freq[i]++;
    }

    for(int i=0;i<=maxi;i++){
        if(freq[i]>0){
            cout<<i<<" "<<freq[i]<<endl;
        }
    }

}