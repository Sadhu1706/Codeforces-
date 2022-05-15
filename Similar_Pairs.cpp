#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n],even = 0,odd = 0;
	map<int,int> o;
	vector<int> v;
	for(int i = 0;i<n;++i){
		cin >> arr[i];
		if(arr[i] % 2 == 0){
			even++;
			v.push_back(arr[i]);
		}
		else{
			odd++;
			o[arr[i]]++;
		}
	}
	string ans;
	int cnt = 0;
	if(even % 2 == 0 && odd % 2 == 0)ans = "YES";
	else {
		for(auto x: v){
			if(o[x - 1] != 0 || o[x + 1] != 0){
				cnt = 1;
				break;
			}
		}
		(cnt == 1)?ans = "YES":ans = "NO";
	}
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





