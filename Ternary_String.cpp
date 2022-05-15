#include <bits/stdc++.h>

using namespace std;

void solve(){
	string str;
	cin >> str;
	int i = 0,j = 0,k = 0,x = 0;
	bool one = false,two = false,three = false;
	int n = str.length(),maxi = INT_MAX;
	while(x < n){
		if(str[x] == '1'){
			one = true;
			i = x;
		}
		else if(str[x] == '2'){
			two = true;
			j = x;
		}
		else if(str[x] == '3'){
			three = true;
			k = x;
		}
		x++;
		if(one && two && three){
			maxi = min(maxi,max(i,max(j,k)) - min(i,min(j,k)));
		}
	}
	(maxi != INT_MAX)?cout << maxi + 1:cout << 0;
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





