#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int64_t ans = 0;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int64_t h = 0;	
	for(int i = 0;i<n;++i){
		if(h > arr[i]){
			ans += h - arr[i] + 1;
			h = arr[i];
		}
		else if(h == arr[i])ans++;
		else if(h < arr[i]){
			ans += arr[i] - h + 1;
			h = arr[i];
		}
	}
	cout << ans + n-1;
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





