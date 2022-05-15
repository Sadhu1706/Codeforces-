#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	map<int64_t,int64_t> mp,mp2;
	int64_t k = n;
	for(int64_t i = 0;i<3;++i){
		for(int64_t j = 0;j<n;++j){
			int64_t val;
			cin >> val;
			if(k == n)mp[val]++;
			mp2[val]++;
		}
		n--;
	}
	if(mp.size() == 1){
		for(auto x: mp){
			cout << x.first << "\n";
			cout << x.first;
			break;
		}	
	}
	else {
		for(auto x: mp){
			int64_t val = x.first;
			//int t = x.second * 3;
			if(mp2[val] != x.second * 3){
				cout << val << "\n";
			}
		}
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





