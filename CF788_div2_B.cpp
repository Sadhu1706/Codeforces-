#include <bits/stdc++.h>

using namespace std;

void solve(){
	 int n,k;
	 cin >> n;
	 string str;
	 cin >> str;
	 vector<int> v;
	 map<char,int> mp;
	 cin >> k;
	 for(int i = 0;i < k;++i){
		 char ch;
		 cin >> ch;
		 mp[ch]++;
	}	
	v.push_back(0);
	int smax = 0;
	for(int i = 0;i < str.length() - 1;++i){
		if(mp[str[i + 1]] == 1)v.push_back(i + 1);
	}
	int len = v.size() - 1;
	int ans = 0;
	for(int i = 0;i < len;++i){
		ans = max(ans,abs(v[i] - v[i + 1]));
	} 
	for(int i = 0;i < len; ++i){
		 if(smax > abs(v[i] - v[i + 1]))
			smax = abs(v[i] - v[i + 1]);
	}
	//if(smax == ans - 1)ans++;
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





