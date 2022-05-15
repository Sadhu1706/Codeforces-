#include <bits/stdc++.h>

using namespace std;

void pattern(int i,int n){
	if(i == 0)return;
	pattern(--i,n);
	for(int j = 0;j < n;++j){
		if(j >= n/2 - i && j <= n/2 + i){
			cout << "*";
		}
		else if( j <= n/2 + i)cout << " ";
	}
	cout << "\n";
}

void solve(){
	int n;
	cin >> n;
	pattern(n,2*n - 1);
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





