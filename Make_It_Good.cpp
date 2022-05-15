#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	bool check = true;
	reverse(arr,arr + n);
	int pos = 0;
	for(int i = 0;i<n - 1;++i){
		if(arr[i] > arr[i+1]){
			check = false;
		}
		else if(arr[i] < arr[i+1] && !check){
			pos = i;
			break;
		}
	}
	(pos != 0)?cout << n - (pos + 1)<< "\n":cout << 0 << "\n";
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
