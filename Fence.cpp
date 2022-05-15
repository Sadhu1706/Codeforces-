#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int sum = 0,ans,pos = 0;
	for(int i  = 0;i<k;++i)sum += arr[i];
	ans = sum;
	int i = 0,j = k;
	while(j < n){
		sum -= arr[i];
		i++;
		sum += arr[j];
		if(sum < ans){
			pos = i;
			ans = sum;
		}
		j++;
	}
	cout << pos + 1<< "\n";
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
