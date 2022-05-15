#include <bits/stdc++.h>

using namespace std;


vector<int> binary(int64_t n){
	vector<int> v;
	while(n > 0){
		//cout << n%2 << "\n";
		v.push_back(n%2);
		n/=2;
	}
	return v;
}

void solve(){
	int64_t n;
	cin >> n;
	vector<int> v,ans;
	map<int64_t,int64_t> mp;
	unordered_set<int64_t> s {1,2,6,24,120,720,5040,40320,362880, 3628800,39916800,
	479001600,6227020800,87178291200,1307674368000};
	ans = binary(n);
	reverse(ans.begin(),ans.end());
	int i = 0;
	for(auto x: ans){
		if(x == 1)v.push_back(pow(2,i));
		++i;
	}
	mp[v[0]]++;
	int64_t sum = v[0],k = 0,count = v.size();
	for(int i = 1;i<v.size();++i){
		sum += v[i];
		mp[sum]++;
	}	
	sum = v[0];
	for(auto x: v){
		if(s.find(sum) != s.end()){
			count -= k;
			k = 0;
		}
		sum += x;
		k++;
	}
	cout << count << "\n";
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





