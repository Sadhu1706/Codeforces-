#include <bits/stdc++.h>

using namespace std;

int flip(int arr[],int i,vector<int> &v,int n,int &maxi){
	if(i == n){
		int one = 0;
		for(auto x: v)cout << x << " ";
		cout << "\n";
		for(auto x: v)if(x == 0){
			one++;
		}
		maxi = max(maxi,one);
		return maxi;
	}
	v.push_back(arr[i]);
	return flip(arr,i+1,v,n,maxi);
	//v.pop_back();
	//return flip(arr,i+1,v,n,maxi);
}

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int maxi = 0;
	vector<int> v;
	cout << flip(arr,0,v,n,maxi);
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





