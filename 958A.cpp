#include <bits/stdc++.h>

using namespace std;

int main(){
	
    int t;
    cin >> t;
    while (t--){
		int n, k ,ans = 0;
		cin >> n >> k;
		while(n > 1){
			n -= k - 1;	
			ans++;
		}
		cout << ans << "\n";
	}
    return 0;
}
