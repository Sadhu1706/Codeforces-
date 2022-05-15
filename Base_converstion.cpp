#include <bits/stdc++.h>

using namespace std;

void convert(int n){
	if(n == 1 || n == 0){
		cout << n;
		return;
	}
	convert(n/2);
	cout << n % 2;
}

void solve(){
	int n;
	cin >> n;
	convert(n);
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





