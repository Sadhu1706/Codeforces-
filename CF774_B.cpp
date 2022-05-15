#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int64_t arr[n];
	int64_t sum1 = 0,sum2 = 0;
	for(int i = 0;i<n;++i){
		cin >> arr[i];
	}
	sort(arr,arr + n);
	string ans = "NO";
	if(n % 2 == 0){
		for(int i = 0;i<n/2;++i)sum1 += arr[i];
		for(int i = n/2 + 1;i < n;++i)sum2 += arr[i];
		(sum2 > sum1)?ans = "YES":ans = "NO";
	}
	else {
		for(int i = 0;i<=n/2;++i)sum1 += arr[i];
		for(int i = n/2 + 1; i<n;++i)sum2 += arr[i];
		(sum2 > sum1)?ans = "YES":ans = "NO";
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





