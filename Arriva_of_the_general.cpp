#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int mini = INT_MAX,maxi = INT_MIN,x ,y;
	for(int i = 0;i<n;++i){
		int val;
		cin >> val;
		if(val <= mini){
			mini = val;
			x = i;
		}
		if(val > maxi){
			maxi = val;
			y = i;
		}
	}	
	 
	if(y < x)cout << n - 1 - x + y;
	else cout << n - 1 - x + y - 1;
}
