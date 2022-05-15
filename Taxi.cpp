#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int val;
	int one = 0,two = 0,three = 0,four = 0;
	for(int i = 0;i<n;++i){
		cin >> val;
		if(val == 1)one++;
		else if(val == 2)two++;
		else if(val == 3)three++;
		else four++;
	}
	int ans = four;
	if(three < one){
		ans += three;
		one -= three;
		int t = (two * 2)/4;
		ans +=  t;
		if((two * 2)%4 == 0)two = 0;
		else two = 1;
		//cout << "current t value : " << two << "\n";
		if(two != 0){
			if(one > 0 && one <= 2){
				ans++;
				one = 0;
			}
			else if(one != 0){
				ans++;
				one -= 2;
			}
		}
		//cout << "current ans1 : " << ans << "\n";
		//cout << "one : " << one << "\n";
		if((one % 4) != 0)ans += (one/4) + 1;
		else ans += (one/4);
		//cout << "current ans2 : " << ans << "\n";
	}
	else if(three >= one){
		ans += three;
		if((two*2)%4 == 0)ans += ((two*2)/4);
		else ans += ((two*2)/4) + 1;
	}
	cout << ans;
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





