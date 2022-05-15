#include <bits/stdc++.h>

using namespace std;

void solve(){
	int l ,r ,a;
	cin >> l >> r >> a;
	int64_t ans1 = 0,ans2 = 0;
	ans1 = r/a + r%a;
	int rem = r%a;
	r -= rem;
	r--;
	//cout << r << "\n";
	if(r >= l)ans2 = r/a + r%a;
	else {
		if(rem == 0 && l > r){
			ans2 = l/a + l%a;
		}
	}
	//cout << ans1 << " - " << ans2 << "\n";
	cout << max(ans1,ans2) << "\n";
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





