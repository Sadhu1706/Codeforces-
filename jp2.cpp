#include <bits/stdc++.h>

using namespace std;

void solve(){
	int arr[4][4];
	for(int i = 0;i<4;++i){
		for(int j = 0;j<4;++j)arr[i][j] = 0;
	}
	for(int i = 3;i >= 3;--i){
		for(int j = 0;j < 4;++j)arr[i][j]++;
	}
	for(int i = 3;i > 1;--i){
		for(int j = 0;j<3;++j)arr[i][j]++;
	}
	
	for(int i = 0;i < 4;++i)arr[i][0]++; 
	int maxi = INT_MIN;
	for(int i = 0;i<4;++i){
		for(int j = 0;j<4;++j)if(arr[i][j] > maxi)maxi = arr[i][j];
	}
	cout << maxi << "\n";
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


