#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	map<int,vector<int>> mp;
	for(int i = 0;i<n;++i){
		mp[arr[i]].push_back(i);
	}
	vector<int> ans;
	for(auto x: mp){
		if(x.second.size() >= 2){
			ans.push_back(x.second[0] + (n - x.second[1]));
		}
	}	
	
	(ans.empty())?cout << -1:cout << *max_element(ans.begin(),ans.end());
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
