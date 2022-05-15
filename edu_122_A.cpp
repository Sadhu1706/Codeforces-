#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n % 7 == 0)cout << n;
	else {
		n -= n % 10;
		while(n % 7 != 0){
			n++;
		}
		cout << n;
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
