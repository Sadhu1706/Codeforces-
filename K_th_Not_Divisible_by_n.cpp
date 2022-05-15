#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n ,k;
	cin >> n >> k;
	int64_t diff = n - 1,val,i;
	i = (k/diff) + 1;
	val = diff * i + (i - 1);
	//cout << "current i and val : " << i << " " << val << "\n";
	(diff * i == k)?(val % n != 0)?cout << val << "\n":cout << val + 1 << "\n" : ((val - (diff * i - k))%n == 0)?cout << val - (diff * i - k) - 1 << "\n": cout << val - (diff * i - k) << "\n";
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





