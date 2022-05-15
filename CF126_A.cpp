#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n],a[n];
	vector<int> v;
//	int val;
	long long int ans = 0;
	for(int i = 0;i < n;++i){
		cin >> arr[i];
	}
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	for(int i = 0;i < n;++i){
		if(arr[i] < a[i]){
			int temp = arr[i];
			arr[i] = a[i];
			a[i] = temp;
		}
	}
	for(int i = 0;i < n - 1;++i){
		ans += abs(arr[i] - arr[i + 1]);
		ans += abs(a[i] - a[i + 1]);
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





