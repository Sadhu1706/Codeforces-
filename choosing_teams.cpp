#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	vector<int> v;
	for(int i = 0;i<n;++i){
		if(arr[i] <= 5 - k)v.push_back(arr[i]);
	}
	cout << v.size()/3;
}
