#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n,k;
	cin >> n >> k;
	int64_t arr[n];
	int64_t ans = -1;
	for(int64_t i = 0;i < n;++i)cin >> arr[i];
	sort(arr,arr + n);
	if(k != 0){
		if(k == n)ans = arr[n - 1];
		else if(arr[k - 1] < arr[k])ans = arr[k - 1];
	}
	else {
		if(arr[0] > 1)ans = arr[0] - 1;
	}	
	cout << ans << "\n";
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





