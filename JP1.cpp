#include <bits/stdc++.h>

using namespace std;

void solve(){
	int sam,kelly,diff,count = 1;
	cin >> sam >> kelly >> diff;
	if(sam >= kelly)cout << -1;
	else {
		int s1 = diff + sam , k1 = kelly;
		while(k1 <= s1){
			s1 += sam;
			k1 += kelly;
			count++;
		}
		cout << count;
	}
	cout << "\n";
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





