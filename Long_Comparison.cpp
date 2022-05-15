#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t x1,x2,k1,k2;
	cin >> x1 >> k1 >> x2 >> k2;
	int64_t a,b;
	a = x1; b = x2;
	vector<int> v1,v2;
	while(x1 > 0){
		v1.push_back(x1%10);
		x1/=10;
	}
	while(x2 > 0){
		v2.push_back(x2%10);
		x2/=10;
	}
	char ans;
	if(v1.size() == v2.size()){
		if(k1 > k2)ans = '>';
		else if(k2 > k1)ans = '<';
		else if(k1 == k2){
			if(a > b)ans = '>';
			else if(a < b)ans = '<';
			else ans = '=';
		}
	}
	else if(v1.size() > v2.size()){
		int val = v1.size() - v2.size();
		if(val <= k2){
			b *= pow(10,val);
			k2 -= val;
			//--------
			if(k1 > k2)ans = '>';
			else if(k2 > k1)ans = '<';
			else if(k1 == k2){
				if(a > b)ans = '>';
				else if(a < b)ans = '<';
				else ans = '=';
			}
		}	
		else{
			ans = '>';
		}
	}
	else if(v1.size() < v2.size()){
		int val = v2.size() - v1.size();
		
		if(val <= k1){
			a *= pow(10,val);
			k1-= val;
			//--------
			if(k1 > k2)ans = '>';
			else if(k2 > k1)ans = '<';
			else if(k1 == k2){
				if(a > b)ans = '>';
				else if(a < b)ans = '<';
				else ans = '=';
			}
		}	
		else{
			ans = '<';
		}
	}
	//cout << "current a and b : " << a << " " << b << endl;
	cout << ans << endl;
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





