#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,val,temp,steps;
	cin >> n >> m;
	val = floor(n/2);
	temp = n % 2;
	steps = val + temp;
	if(steps % m == 0)cout << steps;
	else {
		int k = steps % m;
		
	}
}
