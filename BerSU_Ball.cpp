#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,m;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	cin >> m;
	int a[m];
	int ans = 0;
	sort(arr,arr + n);
	for(int i = 0;i<m;++i)cin >> a[i];
	sort(a,a + m);
	for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j){
			if(a[j] != -1 && abs(arr[i] - a[j]) <= 1){
				ans++;
				a[j] = -1;
				break;
			}
		}
	}
	cout << ans;
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





