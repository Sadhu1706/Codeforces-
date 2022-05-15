#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, m;
		cin >> n >> m;
		map<int,int>mp;
		vector<pair<int,int>> v;
		int arr[n][m];
		for(int i = 0;i<n;++i){
			int maxi = INT_MIN;
			for(int j = 0;j<m;++j){
				cin >> arr[i][j];
				mp[arr[i][j]]++;
				if(arr[i][j] > maxi)maxi = arr[i][j];
			}
			v.push_back(make_pair(maxi, mp[maxi]);
			mp.clear();
		}
	}
}
