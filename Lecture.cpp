#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	string str,s;
	map<string ,string> mp;
	for(int i = 0;i<m;++i){
		cin >> str >> s;
		mp[str] = s;
	}
	for(int i = 0;i<n;++i){
		cin >> str;
		(str.length() <= mp[str].length())?cout << str:cout << mp[str];
		cout << " ";
	}
}
