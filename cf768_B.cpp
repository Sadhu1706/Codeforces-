#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	map<int,int> mp1,mp2,mp;
	int arr[n];
	for(int i = 0;i<n;++i){
		cin >> arr[i];
		mp[arr[i]]++;
	}
	int c1 = 0,c2 = 0;
	for(int i = 0;i<n/2;++i){
		if(mp[arr[i]] == 1)c1++;
	}
	for(int i = n/2;i < n;++i){
		if(mp[arr[i]] == 1)c2++;
	}
	int mini = min(c1,c2);
	cout << "current c1 and c2 : " << c1 << " " << c2 << "\n";
	if((n&1) == 0)cout << mini + 1;
	else cout << 
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





