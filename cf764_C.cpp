#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n],real[n+1] = {0},ans = 0;
	for(int i = 0;i<n;++i)cin >> arr[i];
	sort(arr,arr + n,greater<int>());
	for(int i = 0;i<n;++i){
		while(arr[i] > n or real[arr[i]] == 1)arr[i]/=2;
		if(arr[i] > 0)real[arr[i]] = 1;
		else ans = -1;
	}
	(ans == -1)?cout << "NO":cout << "YES";
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





