#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int l1,r1,l2,r2;
	while(n--){
		cin >> l1 >> r1 >> l2 >> r2;
		if(r1 >= l2){
			if(l1 > l2)cout << l1 + (l1 - l2);
			else cout << l2;
		}
		else cout << l1 + l2;
		cout << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test = 1;
	//cin >> test;
	while(test--){
		solve();
	}
}





