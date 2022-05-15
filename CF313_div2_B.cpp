#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	string str;
	cin >> str;
	cin >> n;
	vector<int> v1,v2;
	for(int i = 0;i < str.length() - 1;++i){
		if(str[i] == str[i+1])v1.push_back(1);
		else v1.push_back(0);
	}
	v2.push_back(0);
	for(int i = 0;i < v1.size();++i){
		v2.push_back(v2[i] + v1[i]);
	}
	while(n--){
		int a,b;
		cin >> a >> b;
		cout << v2[b-1] - v2[a-1] << "\n";
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





