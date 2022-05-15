#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n,min,min_sum=0;
	cin >> n;
	vector<int> v;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	sort(arr,arr + n);
	v.push_back(arr[0]);
	min_sum = arr[0];
	for(int i = 1;i<n;++i){
		min = arr[i] - min_sum;
		min_sum += min;
		v.push_back(min);
	}
	cout << *max_element(v.begin(),v.end()) << "\n";
	
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





