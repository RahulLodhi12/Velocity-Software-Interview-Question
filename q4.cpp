#include <bits/stdc++.h>
using namespace std;

void func(int n, int sum, char* arr, int ind){
	if (ind > n || sum < 0) return;

	if (ind == n){
		if(sum == 0){
			arr[ind] = '\0';
			cout<<arr<< " ";
		}
		return;
	}

	for (int i = 0; i <= 9; i++){
		arr[ind] = i + '0';

		func(n, sum - i, arr, ind + 1);
	}
}

int main(){
	int n,sum;
    cin>>n>>sum;

    char arr[n+1];
    func(n,sum,arr,0);
	return 0;
}
