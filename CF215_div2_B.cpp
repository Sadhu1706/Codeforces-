#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	int arr[n];
	int count = 0;
	vector<int> v,freq(1000000,0);
	for(int i = 0;i < n;++i)cin >> arr[i];
	reverse(arr,arr + n);
	for(int i = 0;i < n;++i){
		if(freq[arr[i]] == 0){
			freq[arr[i]] = 1;
			count++;
		}
		v.push_back(count);
	}
	reverse(v.begin(),v.end());
	while(m--){
		int k;
		cin >> k;
		cout << v[k - 1] << "\n";
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





