#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	string str1,str2;
	if(n == 1)cout << 1;
	else if(n == 2)cout << 2;
	else{
		int sum1 = 0,sum2 = 0;
		bool c = true,k = true;
		while(sum1 < n){
			if(c){
				sum1 += 2;
				str1 += '2';
				c = false;
			}
			else {
				sum1 += 1;
				str1 += '1';
				c = true;
			}
		}	
		while(sum2 <n){
			if(k){
				sum2 += 1;
				str2 += '1';
				k = false;
			}
			else {
				sum2 +=2;
				str2 += '2';
				k = true;
			}
		}
		
		(sum1 == n)?cout << str1:cout << str2;
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





