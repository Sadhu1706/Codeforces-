#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; ++i)cin >> arr[i];
	vector<int> v;
	sort(arr,arr + n);
	int i = 0,j = n-1;
	while(i <= j){
		if(i == j)v.push_back(arr[i]);
		else {
			v.push_back(arr[i]);
			v.push_back(arr[j]);
		}
		i++;
		j--;
	}
	reverse(v.begin(),v.end());
	for(auto x: v)cout << x << " ";
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





