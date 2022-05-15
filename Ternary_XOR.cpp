#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	string str,a,b;
	cin >> str;
	bool c = true;
	for(auto x: str){
		if(x == '0'){
			a += '0';
			b += '0';
		}
		else if(x == '1'){
			if(c){
				a += '1';
				b += '0';
				c = false;
			}
			else {
				a += '0';
				b += '1';
			}
		}
		else if(x == '2'){
			if(c){
				a += '1';
				b += '1';
			}
			else {
				a += '0';
				b += '2';
			}
		}
	}
	cout << a << "\n" << b << "\n";
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





