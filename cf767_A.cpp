#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	vector<pair<int,int>> v(n);
	int arr[n],a[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	for(int i = 0;i<n;++i)cin >> a[i];
	for(int i = 0;i<n;++i){
		v.push_back(make_pair(arr[i],a[i]));
	}
	sort(v.begin(),v.end());
	for(auto x: v){
		if(x.first <= k){
			k += x.second;
		}
	}
	cout << k << "\n";
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





