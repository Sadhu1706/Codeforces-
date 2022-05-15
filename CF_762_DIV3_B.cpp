#include <bits/stdc++.h>

using namespace std;

int main(){
	//cout << cbrt(1000000000);
	//cout << "\n" << sqrt(1000000000);
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		map<int,int>mp;
		int count = 0, k = 0;
		if(n%2 == 0)k = 1;
		for(int i = 1;i<=sqrt(n)+k;++i){
			if(i*i <= n)mp[i*i]++;
		}
		for(int i = 1;i<=cbrt(n)+k;++i){
			if(i*i*i <= n)mp[i*i*i]++;
		}
		//for(auto x: mp)if(x.second == 2)count--;
		int val = 0;
		for(auto x: mp)if(x.second >= 2)val++;
		int temp1 = sqrt(n);
		int temp2 = cbrt(n);
		//cout << temp1 << " " << temp2 << endl;
		cout << temp1 + temp2 - val << endl;
		//scout << cnt - count << endl; 
	}
}
