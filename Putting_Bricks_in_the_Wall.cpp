#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n][n];
	for(int i = 0;i<n;++i){
		for(int j = 0;j<n;++j){
			if(i == 0 && j == 0 || i == n-1 && j == n-1)arr[i][j] = -1;
			else cin >> arr[i];
		}	
	}
	if(arr[0][1] == 0 && arr[1][0] == 0){
		if(arr[n-1][n-2] == 0 && arr[n-2][n-1] == 0){
			cout << 2 << "\n";
			cout << n-1 << " " << n-2 << "\n";
			cout << n-2 << " " << n-1 << "\n";
		}
		else if(arr[n-1][n-2] == 0 && arr[n-2][n-1] == 1){
			cout << 1 << "\n";
			cout << n-1 << " " << n-2 << "\n";
		}
		else if(arr[n-1][n-2] == 1 && arr[n-2][n-1] == 0){
			cout << 1 << "\n";
			cout << n-2 << " " << n-1 << "\n";
		}
		else if(arr[n-1][n-2] == 1 && arr[n-2][n-1] == 1){
			cout << 0 << "\n";
		}
	}
	else if(arr[0][1] == 0 && arr[1][0] == 1){
		if(arr[n-1][n-2] == 0 && arr[n-2][n-1] == 0){
			cout << 1 <<"\n";
			cout << 0 << " " << 1 << "\n";
		}
		else if(arr[n-1][n-2] == 0 && arr[n-2][n-1] == 1){
			cout << 2 << "\n";
			cout << 0 << " " << 1 << "\n";
			cout << n-2 << " " << n-1 << "\n";
		}
		else if(arr[n-1][n-2] == 1 && arr[n-2][n-1] == 0){
			cout << 2 << "\n";
			cout << 0 << " " << 1 << "\n";
			cout << n-1 << " " << n-2 << "\n"
		}
		else if(arr[n-1][n-2] == 1 && arr[n-2][n-1] == 1){
			cout << 1 << "\n";
			cout << 1 << " " << 0 << "\n";
		}
	}
	else if(
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





