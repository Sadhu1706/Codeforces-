#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	map<int,int> mp;
	for(int i = 0;i<n;++i){
		int val;
		cin >> val;
		mp[val]++;
	}
	int u = mp.size(), maxi = 1;
	vector<int> v;
	for(auto x: mp){
		if(x.second > 1){
			maxi = max(x.second , maxi);
		}
	}
	(n == 1)?cout << 0 << "\n":(u < maxi)?cout << u << "\n":cout << min(maxi,u-1) << "\n";
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





