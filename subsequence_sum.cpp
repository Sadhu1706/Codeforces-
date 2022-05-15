#include <bits/stdc++.h>

using namespace std;

void subseq_sum(int arr[],int i,int n,int sum ,int ans,vector<int> &v){
	if(i == n){
		if(ans == sum){
			for(auto x: v)cout << x << " ";
			cout << "\n";
		}
		return;
	}
	
	ans += arr[i];
	v.push_back(arr[i]);
	subseq_sum(arr,i+1,n,sum,ans,v);
	ans -= arr[i];
	v.pop_back();
	subseq_sum(arr,i+1,n,sum,ans,v);
}


void solve(){
	int n;
	int sum;
	cin >> n;
	cin >> sum;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int ans = 0;
	vector<int> v;
	subseq_sum(arr,0,n,sum,ans,v);
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





