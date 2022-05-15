#include <bits/stdc++.h>

using namespace std;

void solve(){
	string str;
	char ch;
	cin >> str >> ch;
	int n = str.length();
	vector<int> v;
	for(int i = 0;i<n;++i){
		if(str[i] == ch){
			v.push_back(i);
		}
	}
	bool ans = false ;
	for(auto x: v){
		if(x % 2 == 0){
			ans = true;
			break;
		}
	}
	(ans)? cout << "YES\n":cout << "NO\n";
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





