#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n ,q;
	cin >> n >> q;
	int64_t arr[n];
	for(int64_t i = 0;i < n;++i)cin >> arr[i];
	sort(arr, arr + n,greater<int>());
	vector<int64_t> v;
	v.push_back(arr[0]);
	for(int64_t i = 0;i < n-1;++i){
		v.push_back(v[i] + arr[i + 1]);
	}
	map<int64_t> mp;
	int64_t i = 0;
	for(auto x: v){
		mp[x] = i;
		++i;
	}
	//for(auto x: v)cout << x << " ";
	//cout << "\n";
	int64_t len = 10000000000;
	vector<int64_t> store(0,len);
	int k = 1,j = 0;
	store[0] = v[0];
	for(int64_t i = 0;i < len;++i){
		if(k > v[j]){
			store[k] = 
		}
	}
	while(q--){
		int64_t sum;
		cin >> sum;
		int64_t ans;
		if(sum > v[n - 1])ans = -1;
		else {
			int k = 0;
			
		}
	}
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





