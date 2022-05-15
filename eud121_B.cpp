#include <bits/stdc++.h>

using namespace std;

void solve(){
	string str;
	cin >> str;
	int64_t n = str.length();
	int64_t x = -1,maxi = INT_MIN,val;
	for(int64_t i = 0;i<n-1;++i){
		val = (str[i] - '0') + (str[i+1] - '0');
		if(val > maxi){
			string s = to_string(str[i] - '0') + to_string(str[i+1] - '0');
			if(to_string(val) > s && to_string(val).length() > s.length()){
				//cout << s  << " " << endl;
				maxi = val;
				x = i;
			}
		}
	}
	string ans;
	//cout << "current maxi : " << maxi << endl;
	if(x == -1 && maxi == INT_MIN){
		x = n-2;
		maxi = 0;
	}
	
	maxi += (str[x] - '0') + (str[x+1] - '0');
	//cout << "current x : " << x << endl;
	//cout << "current maxi : " << maxi << endl;
	for(int64_t i = 0;i<n;++i){
		if(i == x){
			ans += to_string(maxi);
			i++;
		}
		else ans += str[i];
	}
	cout << ans << "\n";
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





