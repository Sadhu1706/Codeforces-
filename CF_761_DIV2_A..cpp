#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		string str,s;
		cin >> str >> s;
		map<char,int> mp;
		for(auto x: str)mp[x]++;
		for(auto x: mp)cout << x.first << " -> " << x.second << "\n";
	}
}
