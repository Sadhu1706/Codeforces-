#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n,k;
	cin >> n >> k;
	int64_t mini = 0;
	if(n % k == 0){
		mini = k * ((n/k * (n/k - 1))/2);
	}
	else {
		int64_t rem = n % k;
		// k - 1 -> n/k 
		//int t = (k - 1)%rem;
		//t * (n/k + 1) * (n/k)/2
		//(k - t) * (n/k * (n/k - 1))/2
		mini += (rem * ((n/k + 1) * (n/k))/2) + (k - rem) * ((n/k * (n/k - 1))/2);
	}
	cout << mini << " " << ((n - (k - 1))*((n - (k - 1) - 1)))/2 << "\n";
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
