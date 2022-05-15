#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n , s;
	cin >> n >> s;
	int64_t val = pow(n ,2);
	cout << s / val << "\n";
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





