#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,x;
	cin >> n >> x;
	vector<int> v(n);
	for(int i = 0;i<n;++i){
		int val;
		cin >> val;
		v[i] = val % 2;
	}
	int odd = count(v.begin(),v.end(),1);
	int even = count(v.begin(),v.end(),0);
	if(odd % 2 == 1){
			if((x & 1) == 1 && odd >= x)cout << "Yes";
			else if(even != 0 && even >= x - odd)cout << "Yes";
			else cout << "No";
	}
	else {
		if(odd == 0)cout << "No";
		else if((x & 1) == 1 && odd - 1 >= x)cout << "Yes";
		else if(even != 0 && even >= x - (odd - 1))cout << "Yes";
		else cout << "No";
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test;
	cin >> test;
	while(test--){
		solve();
	}
}





