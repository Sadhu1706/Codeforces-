#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t val;
	cin >> val;
	vector<int> v;
	if(val % 2 == 0){
		cout << val/2 -1 << " " << val - (val/2) << " " <<  1 << endl;
	}
	else{
		int64_t a,b;
		a = val/2;
		b = val/2 + 1;
		if(a % 2 == 1){
			cout << a - 2 << " " << b + 1 << " " << 1 << endl;
		}
		else{
			cout << b - 2 << " " << a + 1 << " " << 1 << endl;
		}
	}
	
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





