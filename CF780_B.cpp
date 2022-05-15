#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	sort(arr,arr + n);
	if(n == 1 && arr[0] == 1 || arr[0] == 0)cout << "YES";
	else if(arr[n-1] == arr[n - 2] + 1 || arr[n - 1] == arr[n - 2])cout << "YES";
	else cout << "NO";
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





