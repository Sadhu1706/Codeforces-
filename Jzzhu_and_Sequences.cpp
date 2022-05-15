#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void solve(){
	int64_t x,y,n;
	cin >> x >> y >> n;
	vector<int64_t>v;
	v.push_back(x);
	v.push_back(y);
	for(int i = 0;i<4;++i){
		int64_t val = y - x;
		x = y;
		y = val;
		v.push_back(y);
	}
	if(v[(n-1)%6] >= 0){
		(v[(n-1)%6] >= 0)?cout << v[(n-1)%6]%mod:cout << mod + v[(n-1)%6];
	}
	else if(abs(v[(n-1)%6]) > mod){
		cout << mod + v[(n-1)%6]%mod;
	}
	else cout << mod + v[(n-1)%6]; 
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





