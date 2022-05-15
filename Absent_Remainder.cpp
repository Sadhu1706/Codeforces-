#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	sort(arr,arr + n);
	int val = floor(n/2);
	if(n == 2){
		cout << arr[1] << " " << arr[0] << endl;
	}
	else {
		for(int i = 2;i<val+2;++i){
			cout << arr[i] << " " << arr[0] << endl;
		}
	}
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



