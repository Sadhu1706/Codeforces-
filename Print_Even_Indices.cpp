#include <bits/stdc++.h>

using namespace std;

void even(int arr[],int n){
	if(n == 0){
		cout << arr[n];
		return;
	}
	if(n % 2 == 0)cout << arr[n] << " ";
	even(arr,--n);
}

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	even(arr,--n);
	cout << "\n";
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





