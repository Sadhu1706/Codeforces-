#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	int64_t arr[n];
	int maxi = -1;
	for(int i=0;i<n;++i){
		cin >> arr[i];
		if(arr[i] > maxi)maxi = arr[i];
	}
	vector<int64_t> v;
	for(int i = 0;i<n;++i)v.push_back(maxi - arr[i]);
	cout << *max_element(v.begin(),v.end()) << "\n";
	
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





