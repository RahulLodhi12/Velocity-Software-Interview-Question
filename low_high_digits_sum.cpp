#include<bits/stdc++.h>
using namespace std;

int lowNum(int n){
    int mini = INT_MAX;
    while(n){
        mini = min(mini,n%10);
        n=n/10;
    }
    return mini;
}

int highNum(int n){
    int maxi = INT_MIN;
    while(n){
        maxi = max(maxi,n%10);
        n=n/10;
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;

    int low = lowNum(n);

    int high = highNum(n);

    int sum = low+high;

    vector<int> digit;

    while(sum){
        digit.push_back(sum%10);
        sum=sum/10;
    }
    
    digit.push_back(low);
    reverse(digit.begin(),digit.end());
    digit.push_back(high);

    string ans="";
    for(auto it:digit){
        ans += char(it+'0');
    }

    cout<<ans;
}