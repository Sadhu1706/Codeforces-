#include <bits/stdc++.h>

using namespace std;

bool check(int x,int d){
	
}

void solve(){
	int64_t x,d;
	cin >> x >> d;
	int count = 0;
	for(int i = 1;i <x/2 + 1;++i){
		int val;
		if(x % i == 0){
			val = x/i;
			bool a1,a2;
			if(check(i,d) == true && (i % d) == 0)a1 = true;
			else a1 = false;
			if(check(val,d) == true && (i % d) == 0)a2 = true;
			else a2 = false;
			if(a1 & a2)count++;
		}
		if(count == 2)break;
	}
	if(count >= 2)cout << "YES";
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





