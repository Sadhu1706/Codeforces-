#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	bool ans = true;
	vector<int> v;
	int64_t val = 3;
	v.push_back(1);
	v.push_back(val);
	for(int i = 2;i<n;++i){
		if( val * 2 <= 1e9){
			v.push_back(val * 2);
			val *= 2;
		}
		else {
			ans = false;
			break;
		}
	}
	if(ans){
		cout << "YES\n";
		for(auto x: v)cout << x << " ";
	}
	else cout << "NO";
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





