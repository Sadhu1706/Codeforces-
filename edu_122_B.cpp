#include <bits/stdc++.h>

using namespace std;

void solve(){
	string str;
	cin >> str;
	int z = 0,o = 0,ans;
	z = int(count(str.begin(),str.end(),'0'));
	o = int(count(str.begin(),str.end(),'1'));
	//cout << z << " " << o << "\n";
	ans = min(z,o);
	//cout << "current ans : " << ans << "\n";
	if(z == o)ans--;
	cout << ans << "\n";
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





