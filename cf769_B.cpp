#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i = 0;i<n;++i){
		v.push_back(make_pair(__builtin_popcount(i),i));
	}
	//for(auto x: v)cout << x.second << " ";
	//cout << "\n";
	sort(v.begin(),v.end());
	for(auto x: v)cout << x.second << " ";
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
