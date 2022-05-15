#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n ,a,k;
	read(a,b);
	cin >> n;
	while(n--){
		cin >> a >> k;
		k--;
		//int64_t ans = a;
		while(k--){
			int64_t val = a;
			vector<int> v;
			while(val > 0){
				v.push_back(val%10);
				val/=10;
			}
			if(*min_element(v.begin(),v.end()) == 0){
				break;
			}
			int64_t temp = *max_element(v.begin(),v.end()) * (*min_element(v.begin(),v.end()));
			a += temp;
		}
		cout << a << "\n";
	}
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





