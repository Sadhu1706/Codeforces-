#include <bits/stdc++.h>

using namespace std;

bool check(string str){
	int cnt = 0;
	for(auto x: str){
		if(x == '1')cnt = 1;
		else if(x == '0' && cnt == 1)return false;
		
	}
	return true;
}

void solve(){
	int n;
	cin >> n;
	string str;
	cin >> str;
	if(check(str)){
		cout << 0;
	}
	else {
		vector<int> v;
		map<char,int> mp;
		for(auto x: str)mp[x]++;
		int z = mp['0'];
		for(int i = 0;i<z;++i){
			if(str[i] == '1')v.push_back(i);
		}	
		for(int i = n-1;i>=z;--i){
			if(str[i] == '0')v.push_back(i);
		}
		sort(v.begin(),v.end());
		cout << 1 << endl;
		cout << v.size() << " ";
		for(auto x: v)cout << x + 1<< " ";
	}
	cout << endl;
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





