#include <bits/stdc++.h>

using namespace std;

int main(){
	int test,n;
	cin >> test;
	while(test--){
		cin >> n;
		map<int,int> mp,m;
		int t = 0;
		for(int i = 0;i<n;++i){
			int val;
			cin >> val;
			if(val == 0)t = 1;
			if(val > 0){
				mp[abs(val)]++;
			}
			if(val < 0)m[val]++;
		}
		int count = 0;
		for(auto x: m){
			if(mp[x.first] != 0){
				auto it = m.find(x.first);
				m.erase(it);
			}
		}
		for(auto x: mp){
			if(x.second >= 2)count += 2;
			else if(x.second == 1)count += 1;
		}
		for(auto x: m){ 
			if(x.second >= 2)count += 2;
			else if(x.second == 1)count += 1;
		}
		if(t == 0)cout << count;
		else cout << count + 1;
		cout << endl;
	}
}
