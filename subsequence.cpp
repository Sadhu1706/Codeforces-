#include <bits/stdc++.h>

using namespace std;

void subseq(int i,vector<int> v,int arr[],int n){
	if(i == n){
		for(auto x: v)cout << x << " ";
		cout << "\n";
		return;
	}
	v.push_back(arr[i]);
	subseq(i+1,v,arr,n);
	v.pop_back();
	subseq(i+1,v,arr,n);
}	

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	vector<int> v;
	subseq(0,v,arr,n);
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





