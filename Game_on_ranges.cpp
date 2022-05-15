#include <bits/stdc++.h>

using namespace std;

int main(){
	int test,n;
	cin >> test;
	while(test--){
		cin >> n;
		vector<pair<int,int>> v;
		map<pair<int,int>,int> mp;
		for(int i = 0;i<n;++i){
			int l,r;
			cin >> l >> r;
			v.push_back(make_pair(l,r));
			mp[make_pair(l,r)]++;
		}
		vector<int> ans;
		int count = 0;
		for(auto x: v){
			if(count == n-1){
				if(x.first == x.second)ans.push_back(x.first);
				else ans.push_back(x.first + 1);
				break;
			}
			int c1;
			c1 = x.first + 1;
			if(x.first == x.second)ans.push_back(x.first);
			else if(c1 <= x.second && mp[make_pair(c1,x.second)] == 1){
				ans.push_back(x.first);
			}
			else ans.push_back(x.second);
			count++;
		}
		for(int i = 0;i<n;++i){
			cout << v[i].first << " " << v[i].second << " " << ans[i] << "\n";
		}
		cout << endl;
	}
}
