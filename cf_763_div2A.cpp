#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n,m,rb,cb,rd,cd;
		cin >> n >> m >> rb >> cb >> rd >> cd;
		int x = 1,y = 1;
		int count = 0;
		while(1){
			if(rb == rd || cb == cd)break;
			if(rb == n){
				x = -1;
			}
			if(cb == m)y = -1;
				if(rb == n && cb == m){
				x = -1;
				y = -1;
			}
			rb += x;
			cb += y;
			//cout << "current rb and cb : " << rb << " " << cb << endl;
			count++;
		}
		cout << count << endl;
	}
}
