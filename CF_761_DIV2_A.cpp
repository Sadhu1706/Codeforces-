#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		string str,s,sm;
		cin >> str >> s;
		map<char,int> mp;
		for(auto x: str)mp[x]++;
		for(auto x: mp){
			for(int i = 0;i<x.second;++i)sm += x.first;
		}
		vector<char> v;
		for(auto x: mp){
			v.push_back(x.first);
		}
		string temp;
		if(v.size() >= 3){
			if(s[0] == v[0] && s[1] == v[1] && s[2] == v[2]){
				for(int i = 0;i<mp[v[0]];++i)temp += v[0];
				temp += v[2];
				for(int i = 0;i<mp[v[1]];++i)temp += v[1];
				for(int i = 0;i<mp[v[2]]-1;++i)temp += v[2];
				for(auto x: mp){
					if(x.first != v[0] && x.first != v[1] && x.first != v[2]){
						for(int i = 0;i<x.second;++i)temp += x.first;
					}	
				}
				cout << temp;
			}
			else cout << sm;
			
		}
		else {
			cout << sm;
		}
//		cout << "\n-------------------";
		cout << "\n";
	}
}
