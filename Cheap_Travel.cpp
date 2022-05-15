#include <bits/stdc++.h>

using namespace std;

int ans = 0;

/*int ride(int n,int m,int a,int b){
	if(n == 0)return ans;
	else {
		if(b*m < a*m && n >= m){
			n -= m;
			ans += b*m;
			return ride(n,m,a,b);
		}
		else if(n < m){
			n = 0;
			ans += n;
			return ride(n,m,a,b);
		}
		else {
			ans += a*m;
			n -= m;
			return ride(n,m,a,b);
		}
	}
	//return ans;
}
*/


void solve(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	while(n > 0){
		if(m <= n){
			if(m * a < b){
				ans += m * a;
				n -= m;
			}
			else{
				ans += b;
				n -= m;
			}
		}
		else {
			ans += min(n * a,b);
			n = 0;
		}
	}
	cout << ans;
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





