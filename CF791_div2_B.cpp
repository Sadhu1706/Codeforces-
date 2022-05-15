#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n,q;
	cin >> n >> q;
	int64_t arr[n];
	int64_t sum = 0;
	for(int64_t i = 0;i < n;++i){
		cin >> arr[i];
		sum += arr[i];
	}
	map<int64_t,int64_t> mp;
	int64_t prev,enc = -1;
	while(q--){
		int t;
		int64_t val,i;
		cin >> t;
		if(t == 1){
			cin >> i >> val;
			if(mp[i - 1] != 0){
				sum -= arr[i - 1];
				sum += val;
				cout << sum << "\n";
				arr[i - 1] = val;
			}
			else if(enc == -1){
				sum -= arr[i - 1];
				sum += val;
				cout << sum << "\n";
				arr[i - 1] = val;
			}
			else {
				sum -= prev;
				sum += val;
				cout << sum << "\n";
				arr[i - 1] = val;
				mp[i - 1]++;
			}	
		}
		else {
			cin >> val;
			sum = val * n;
			cout << sum << "\n";
			prev = val;
			mp.clear();
			enc = 1;
		}
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





