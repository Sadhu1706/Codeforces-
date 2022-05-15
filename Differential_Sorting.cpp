#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	int64_t arr[n];
	vector<vector<int64_t>> v;
	for(int64_t i = 0;i<n;++i)cin >> arr[i];
	if(is_sorted(arr,arr + n))cout << 0 << "\n";
	else if(arr[n-2] > arr[n-1] || (arr[n-2] < 0 && arr[n-1] < 0))cout << -1 << "\n";
	else {
		vector<int64_t> temp;
		for(int i = 0;i < n - 2;++i){
			temp.push_back(i + 1);
			temp.push_back(n - 1);
			temp.push_back(n);
			v.push_back(temp);
			temp.clear();
		}
		cout << v.size() << "\n";
		for(auto x: v){
			for(auto y: x)cout << y << " ";
			cout << "\n";
		}
	}
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





