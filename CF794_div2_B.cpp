#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;++i)cin >> arr[i];
	int ans = 0,maxi = arr[0];
	for(int i = 0;i < n;++i){
		if(maxi > arr[i]){
			ans++;
			maxi = arr[(i + 1) % n];
		}
		else if(arr[i] > maxi)maxi = arr[i];
	}	
	cout << ans << "\n";
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





