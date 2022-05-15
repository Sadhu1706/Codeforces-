#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	int64_t arr[n];
	for(int i = 0;i<n;++i){
		cin >> arr[i];
	}
	int64_t ans = 0,positive = 0,negative = INT_MIN;
	bool checkp = true,checkn = true;
	for(int i = 0;i<n;++i){
		if(arr[i] < 0){
			negative = max(negative,arr[i]);
			//cout << "current negative : " << negative << "\n";
			if(checkp){
				ans += positive;
				positive = 0;
				checkn = true;
				checkp = false;
			}
		}
		else {
			positive = max(positive,arr[i]);
			if(checkn){
				if(negative != INT_MIN)ans += negative;
				negative = INT_MIN;
				checkp = true;
				checkn = false;
			}
		}
	}
	if(arr[n-1] > 0)ans += positive;
	else ans += negative;
	cout << ans << "\n";
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


