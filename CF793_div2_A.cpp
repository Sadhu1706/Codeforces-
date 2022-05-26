#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	string str;
	cin >> n >> str;
	int ans = 1;
	char mid = str[n/2];
	for(int i = n/2 + 1; i < n;++i){
		if(str[i] == mid)ans++;
		else break;
	}
	for(int i = n/2 - 1;i >= 0;--i){
		if(str[i] == mid)ans++;
		else break;
	}
	cout << ans << "\n";
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





