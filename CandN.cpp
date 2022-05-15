#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	vector<int> v;
	while(n > 0){
		if(n != 9){
			v.push_back(min((9 - n%10),n%10));
		}
		else v.push_back(n%10);
		n/=10;
	}
	reverse(v.begin(),v.end());
	for(auto x: v)cout << x;
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





