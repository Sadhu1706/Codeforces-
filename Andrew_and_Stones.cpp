#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	int64_t arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int64_t oddcnt = 0,evencnt = 0,odd = 1,ans = 0;
	vector<int> v;
	for(int i = 1;i<n-1;++i){
		if(arr[i] % 2 == 0){
			ans += arr[i]/2;
			evencnt++;
		}
		else{
			oddcnt++;
			odd = max(arr[i],odd);
			v.push_back(arr[i]);
		}
	}
	if(oddcnt == 1 && evencnt == 0)cout << -1;
	else if(evencnt == 0 && odd == 1)cout << -1;
	else {
		for(auto x: v){
			if(x == odd){
				odd = -1;
			}
			ans += (x + 1)/2;
		}
		cout << ans;
	}
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





