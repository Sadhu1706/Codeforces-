#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	string str;
	cin >> str;
	if(n == 1)cout << "YES";
	else if(n == 2){
		if(str == "01" || str == "10")cout << "YES";
		else cout << "NO";
	}
	else cout << "NO";
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





