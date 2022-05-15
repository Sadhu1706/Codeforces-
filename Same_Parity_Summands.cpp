#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	if(k > n)cout << "NO";
	else if(n >= k * 2 && (n & 1) == 0){
		cout << "YES\n";
		for(int i = 0;i<k-1;++i)cout << 2 << " ";
		cout << n - (2 * (k - 1));
	}
	else {
		if(((n - (k - 1)) & 1) == 1){
			cout << "YES\n";
			for(int i = 0;i<k-1;++i)cout << 1 << " ";
			cout << n - (k - 1);
		}
		else cout << "NO";
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





