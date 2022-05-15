#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n == 2){
		cout << 2 << endl;
		cout << 1 << " " << 2 << endl;
	}
	else if(n == 3){
		cout << 2 << endl;
		cout << 3 << " " << 2 << endl;
		cout << 3 << " " << 1 << endl;
	}
	else {
		cout << 2 << endl;
		cout << n - 2 << " " << n << endl;
		cout << n - 1 << " " << n - 1 << endl;
		cout << n - 1 << " " << n - 3 << endl;
		int j = n - 2,k = n - 4;
		for(int i = 0;i<n-3;++i){
			if(j < 3 && k < 1)break;
			cout << j << " " << k << "\n";
			j--;k--;
		}
	}
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
