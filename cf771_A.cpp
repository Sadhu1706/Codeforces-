#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	vector<int> v;
	int mini = -1;
	for(int i = 0;i<n;++i){
		if(arr[i] != i+1){
			mini = i;
			break;
		}
	}
	//cout << "current mini : " << mini << "\n";
	if(mini != -1){
		for(int i = mini;i < n;++i){
			if(arr[i] == mini + 1){
				v.push_back(arr[i]);
				break;
			}
			v.push_back(arr[i]);
		}
		for(int i = 0;i<mini;++i){
			cout << arr[i] << " ";
		}
		reverse(v.begin(),v.end());
		for(auto x: v)cout << x << " ";
		for(int i = mini + v.size();i < n;++i)cout << arr[i] << " ";
	}
	else {
		for(int i = 0;i<n;++i)cout << arr[i] << " ";
	}
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





