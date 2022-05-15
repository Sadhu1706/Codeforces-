#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	bool one = false,zero = false;
	cin >> n;
	int arr[n];
	map<int,int> mp;
	for(int i = 0;i < n;++i){
		cin >> arr[i];
		if(arr[i] == 1)one = true;
		else if(arr[i] == 0)zero = true;
		mp[arr[i]]++;
	}
	if(mp.size() == 1)cout << "YES";
	else if(one && zero)cout << "NO";
	else {
		if(zero)cout << "YES";
		else if(one){
			bool check = true;
			for(int i = 0;i < n;++i){
				if(mp[arr[i] - 1] != 0){
					check = false;
					break;
				}
			}	
			(check)?cout << "YES":cout << "NO";
		}
		else cout << "YES";
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





