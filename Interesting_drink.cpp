#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t t = 1000000001;
	int64_t temp[t];
	int n,q;
	cin >> n;
	int arr[n];
	for(int i  = 0;i<n;++i)cin >> arr[i];
	cin >> q;
	sort(arr,arr + n);
	for(int i  = 0;i<n;++i){
		temp[arr[i]] = i + 1;
	}
	for(int i  = 0;i<q;++i){
		int k;
		cin >> k;	
		cout << temp[k] << "\n";
	}
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





