#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a,b;
	cin >> a >> b;
	if(a == 0)cout << 1;
	else cout << a + b * 2 + 1;
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





