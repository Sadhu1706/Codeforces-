#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,x = 0,y = 0,t = -1;
	bool ans = true;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i){
		cin >> arr[i];
	}
	int i;
	for(i = 0;i<n - 1;++i){
		if(arr[i] > arr[i+1]){
			if(t != 0)x = i;
			t = 0;
		}
		else if(arr[i] < arr[i+1] && t == 0){
			y = i;
			t = 1;
			break;
		}
	}
	//cout << "current x and y : " <<  x << " " << y << "\n";
	vector<int> v;
	if(t == 0)y = i;
	if(x != y && (y != n-1)){
		for(int i = 0;i<n;++i){
			if(i < x || i > y)v.push_back(arr[i]);
		}
		/*for(auto x: v)cout << x << " ";
		cout << "\n";
		*/ 
		
		for(int i = 0;i<v.size()-1;++i){
			if(v[i] > v[i+1]){
				ans = false;
				break;
			}
		}
	}
	int maxi = 0,mini = 0;
	if(x == 0 && y == n-1){
		mini = arr[y];
		maxi = arr[x];
	}
	else if(x == 0){
		mini = arr[y];
		maxi = arr[y+1];
	}
	else if(y == n-1){
		maxi = arr[x];
		mini = arr[x-1];
	}
	else {
		mini = arr[x-1];
		maxi = arr[y+1];
	}
	//
	//cout << "current mini and maxi : " << mini << " " << maxi << "\n";
	for(int i = x;i<=y;++i){
		if(arr[i] < mini || arr[i] > maxi){
			ans = false;
			break;
		}
	}
	(ans)?cout << "yes\n" << ++x << " " << ++y:cout << "no";
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





