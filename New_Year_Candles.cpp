#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a,b;
	cin >> a >> b;
	int ans = a,val = 0,rem = 0,t = a;
	do{
		rem = t % b;
		t/=b;
		val += t;
		t += rem;
		//cout << "current val : " << val << endl;
		
	}while(t >=	b);	
	cout << ans + val << endl;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test = 1;
	//cin >> test;
	while(test--){
		solve();
	}
}
