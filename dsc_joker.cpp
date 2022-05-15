#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,d;
	cin >> n >> d;
	int tot = 0,count = 0;
	for(int i = 0;i<n;++i){
		int temp;
		cin >> temp;
		tot += temp;
	}
	count += 2*(n - 1);
	tot += count * 5;
	if(tot > d)cout << -1;
	else {
		int val = d - tot;
		count += floor(val/5);
		cout << count;
	}
	
}
