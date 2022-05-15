#include <bits/stdc++.h>

using namespace std;

bool check(int64_t a,int64_t b,int64_t c){
	if(a - b == b - c)return true;
	return false;
}

void solve(){
	int64_t a,b,c,v;
	cin >> a >> b >> c;
	string ans = "NO";
	v = a + c;
	if(a == 0 || b == 0 || c == 0)ans = "NO";
	else if(2*b - c > 0 && (2*b - c)%a == 0)ans = "YES";
	else if(2*b - a > 0 && (2*b - a)%c == 0)ans = "YES";
	else if(v%2 == 0 && (v/2)%b == 0 && v > 0)ans = "YES";
	else ans = "NO";
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




 
