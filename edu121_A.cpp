#include <bits/stdc++.h>

using namespace std;

void solve(){
	string str;
	cin >> str;
	vector<char> v;
	for(auto x: str)v.push_back(x);
	sort(v.begin(),v.end());
	for(auto x: v)cout << x;
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





