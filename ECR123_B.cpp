#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)arr[i] = i+1;
	sort(arr,arr + n,greater<int>());
	for(int i = 0;i<n;++i)cout << arr[i] << " ";
	cout << "\n";
	for(int i = 0;i<n-1;++i){
		for(int j = 0;j < i;++j){
			cout << arr[j] << " ";
		}
		cout << arr[i + 1] << " " << arr[i] << " ";
		for(int j = i+2;j<n;++j)cout << arr[j] << " ";
		cout << "\n";
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





