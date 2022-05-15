#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n],a[n];
	for(int i = 0;i<n;++i){
		cin >> arr[i];
	}
	for(int i=0;i<n;++i)cin >> a[i];
	for(int i = 0;i<n;++i){
		if(a[i] < arr[i])swap(a[i],arr[i]);
	}
	sort(arr,arr + n);
	sort(a,a + n);
	cout << arr[n-1] * a[n-1] << "\n";
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
