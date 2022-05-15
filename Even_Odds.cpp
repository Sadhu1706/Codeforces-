#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n,a;
	cin >> n >> a;
	if(n % 2 == 1){
		long long int val = n/2 + 1;
		if(a <= val){
			cout << 2 * a - 1;
		}
		else {
			a -= val;
			cout << 2 * a;
		}
	}
	else {
		if(a <= n/2){
			cout << 2 * a - 1;
		}
		else {
			a -= n/2;
			cout << 2 * a;
		}
	}
}
