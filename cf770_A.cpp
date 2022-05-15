#include <bits/stdc++.h>

using namespace std;

bool check(string str){
	string s = str;
	reverse(s.begin(),s.end());
	if(s == str)return true;
	return false;
}

void solve(){
	int n,k;
	cin >> n >> k;
	string str; 
	cin >> str;
	//if(n == 1)cout << 1;
	if(check(str))cout << 1;
	else {
		if(k == 0)cout << 1;
		else cout << 2;
	}
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





