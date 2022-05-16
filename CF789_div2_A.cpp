#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	map<int,int> mp;
	for(int i = 0;i < n;++i){
		int val; 
		cin >> val;
		mp[val]++;
	}
	int cnt = 0;
	for(auto x: mp){
		if(x.second > 1)cnt++;
	}
	if(mp.size() == 1 && mp[0] != 0)cout << 0;
	else if(mp[0] != 0)cout << n - mp[0];
	else {
		(cnt >= 1)?cout << n:cout << n + 1;
	}
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





