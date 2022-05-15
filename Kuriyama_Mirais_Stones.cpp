#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	int64_t arr[n];
	vector<int64_t> v,u;
	for(int64_t i = 0;i<n;++i)cin >> arr[i];
	for(int64_t i = 0;i<n;++i){
		if(i == 0)v.push_back(arr[i]);
		else v.push_back(v[i-1] + arr[i]);
	}
	sort(arr,arr + n);
	for(int64_t i = 0;i<n;++i){
		if(i == 0)u.push_back(arr[i]);
		else u.push_back(u[i-1] + arr[i]);
	}
	int64_t m,l,r,t;
	cin >> m;
	while(m--){
		cin >> t >> l >> r;
		if(t == 1){
			if(l == 1){
				cout << v[r -1];
			}
			else{
				cout << v[r-1] - v[l - 2];
			}
		}
		else {
			if(l == 1){
				cout << u[r -1];
			}
			else{
				cout << u[r-1] - u[l - 2];
			}
		}
		cout << "\n";
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





