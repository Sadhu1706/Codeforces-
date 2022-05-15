#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int k = 0,l = 0;
	for(int i = n-2;i >= 0;--i){
		if(arr[i] != 1){
			k = i + 1;
			break;
		}
	}
	for(int i = 0;i<n;++i){
		if(arr[i] != 1){
			l = i - 1;
			break;
		}
	}
	cout << k - l << "\n";
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test;
	cin >> test;
	while(test--){
		solve();
	}
}





