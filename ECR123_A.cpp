#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	string str;
	while(n--){
		cin >> str;
		int r,g,b,R,G,B,i = 0;
		for(auto x: str){
			if(x == 'r')r = i;
			else if(x == 'g')g = i;
			else if(x == 'b')b = i;
			else if(x == 'R')R = i;
			else if(x == 'G')G = i;
			else if(x == 'B')B = i;
			i++;
		}
		if(r < R && g < G && b < B)cout << "YES";
		else cout << "NO";
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





