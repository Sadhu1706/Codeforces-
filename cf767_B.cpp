#include <bits/stdc++.h>

using namespace std;

void solve(){
	int l,r,k;
	cin >> l >> r >> k;
	int n = r - l + 1;
	int odd = 0,even = 0;
	if((l & 1 ) == 1 && (r & 1) == 1){
		even = floor(n/2);
		odd = n - even;
	}
	else if((l & 1 ) == 1 && (r & 1 ) == 0){
		odd = floor(n/2);
		even = floor(n/2);
	}
	else if((l & 1 ) == 0 && (r & 1 ) == 0){
		odd = floor(n/2);
		even = n - odd;
	}
	else {
		odd = n/2;
		even = n/2;
	}
	if(odd == 1 && n == 1 && l != 1)cout << "YES";
	else if(k >= odd && even >= 1)cout << "YES";
	else cout << "NO";
//	cout << "\ncurrent odd , even " << odd << " " << even << endl;
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





