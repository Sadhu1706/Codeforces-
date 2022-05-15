#include <bits/stdc++.h>

using namespace std;

void solve(){
	
	int n;
	cin >> n;
	while(n--){
		vector<pair<int64_t,int64_t>> v;
		int ymax = INT_MIN;
		for(int i = 0;i<3;++i){
			int x,y;
			cin >> x >> y;
			if(ymax < y)ymax = y;
			v.push_back(make_pair(x,y));
		}
		int ans = 0;
		for(int i = 0;i<3;++i){
			int cnt = 0;
			for(int j = 0;j<3;++j){
				//cout << "current j : "<< v[i].second << " " << v[j].second << "\n";
				if(v[i].second == v[j].second && v[i].first != v[j].first){
					
					if(v[i].second == ymax)ans = abs(v[i].first - v[j].first);
					cnt = 1;
					break; 
				}
			}
			if(cnt == 1)break;
		}
		cout << ans << "\n";
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





