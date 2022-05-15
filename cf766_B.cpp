#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	vector<int>v;
	for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j){
			int ans = max(i,n - 1 - i) + max(j,m-1-j);
			v.push_back(ans);
		}
	}
	sort(v.begin(),v.end());
	for(auto x: v)cout <<x << " ";
	cout << endl;
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





