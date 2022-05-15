#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,x,y;
	cin >> n >> x >> y;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	if(n == 1){
		if(x + arr[0] == y || ((x+3)^arr[0]) == y)cout << "Alice";
		else cout << "Bob";
	}
	else {
		//alice 
		int alice=x,bob=x+3;
		for(int i = 0;i<n-1;++i)alice += arr[i];
		alice ^= arr[n-1];
		//bob
		for(int i = 0;i<n-2;++i)bob += arr[i];
		bob^=arr[n-2];
		bob^=arr[n-1];
		cout << "current alice and bob value : " << alice  << " " << bob << "\n";
		if(alice == y)cout << "Alice";
		else cout << "Bob";
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





