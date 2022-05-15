#include <bits/stdc++.h>

using namespace std;

int main(){
	int64_t test,n;
	cin >> test;
	while(test--){
		cin >> n;
		int64_t arr[n];
		for(int64_t i = 0;i<n;++i)cin >> arr[i];
		int64_t g1,g2;
		g1 = arr[0];
		g2 = arr[1];
		for(int64_t i = 0;i<n;i+=2){
			g1 = __gcd(g1,arr[i]);
		}
		for(int64_t i = 1;i<n;i+=2){
			g2 = __gcd(g2,arr[i]);
		}
		int c1 = 1,c2 = 1;
		for(int64_t i = 0;i<n;i+=2){
			if(arr[i] % g2 == 0){
				c2 = 0;
				break;
			}
		}
		for(int64_t i = 1;i<n;i+=2){
			if(arr[i] % g1 == 0){
				c1 = 0;
				break;
			}
		}
		if(g1 == g2 || (c1 == 0 && c2 == 0))cout << 0;
		else if(c1 == 1 && c2 == 1)cout << max(g1,g2);
		else if(c1 == 1)cout << g1;
		else cout << g2;
		cout << endl;
	}
}
