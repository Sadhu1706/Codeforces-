#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n,srem,frem,mini ,maxi;
	cin >> n;
	srem = n % 6;
	frem = n % 4;
	if(srem == 0)mini = n/6;
	else if(srem == 2){
		mini = (n/6 - 1) + 2;
	}
	else if(srem == 4)mini = n/6 + 1;
	else mini = -1;
	if(frem != 2 && frem != 0)maxi = -1;
	else maxi = n/4;
	
	if(mini == -1 && maxi == -1 || n < 4)cout << -1;
	else if(mini == -1)cout << maxi << " " << maxi;
	else if(maxi == -1)cout << mini << " " << mini;
	else cout << mini << " " << maxi;
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





