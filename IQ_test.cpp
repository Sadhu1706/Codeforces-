#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int,int> mp;
	int arr[n];
	for(int i = 0;i<n;++i){
		cin >> arr[i];
		mp[(1 & arr[i])]++;
	}
	if(mp[1] == 1){
		for(int i = 0;i<n;++i){
			if((1 & arr[i]) == 1){
				cout << i + 1;
				break;
			}
		}
	}
	else{
		for(int i = 0;i<n;++i){
			if((1 & arr[i]) == 0){
				cout << i + 1;
				break;
			}
		}
	}
}
