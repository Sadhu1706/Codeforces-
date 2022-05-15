#include <bits/stdc++.h>

using namespace std;

int max_num(int arr[],int n){
	if(n == 0)return arr[n];
	int maxi = max(arr[n],max_num(arr,n-1));
	return maxi;
}

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	cout << max_num(arr,--n);
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test = 1;
	//cin >> test;
	while(test--){
		solve();
	}
}





