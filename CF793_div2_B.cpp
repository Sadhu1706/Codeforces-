#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i <n;++i)cin >> arr[i];
	vector<int> v;
	for(int i = 0;i <n;++i){
		if(i != arr[i]){
			v.push_back(arr[i]);
		}
	}
	int ans = v[0];
	for(int i = 1;i < v.size(); ++i){
		ans &= v[i];
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





