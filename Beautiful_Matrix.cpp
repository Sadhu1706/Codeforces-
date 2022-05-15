#include <bits/stdc++.h>

using namespace std;

void solve(){
	int x ,y;
	for(int i = 0;i<5;++i){
		int cnt = 0;
		for(int j = 0;j<5;++j){
			int val;
			cin >> val;
			if(val == 1){
				x = i;
				y = j;
				cnt = 1;
				break;
			}
		}
		if(cnt == 1)break;
	}
	cout << abs(2 - x) + abs(2 - y);
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





