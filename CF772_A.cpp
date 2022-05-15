#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	int ans = 0;
	for(int i = 0;i<n;++i)cin >> arr[i];
	for(int i = 1;i<n-2;++i){
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
			int k,t = max(arr[i],max(arr[i-1] ,arr[i+1]));
			if(i + 2 < n)k = max(arr[i],max(arr[i+1], arr[i+2]));
			arr[i+1] = max(t,k);
			ans++;
			
		}
	}
	if(arr[n-2] > arr[n-3] && arr[n-2] > arr[n-1]){
		ans++;
		arr[n-1] = max(arr[n-2],max(arr[n-3],arr[n-1]));
	}
	cout << ans << "\n";
	for(int i = 0;i<n;++i)cout << arr[i] << " ";
	cout << "\n";
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





