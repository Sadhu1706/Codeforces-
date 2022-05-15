#include <bits/stdc++.h>

using namespace std;

bool check(int n){
	map<int,int> mp;
	int count = 0;
	while(n > 0){
		mp[n%10]++;
		n/=10;	
		count++;
	}
	if(count == mp.size())return true;
	return false;
}

int main(){
		int n;
		cin >> n;
		int count = 1;
		while(count){
				n++;
				if(check(n)){
					break;
				}
		}
		cout << n;
}
