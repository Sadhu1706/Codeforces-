#include <bits/stdc++.h>

using namespace std;

string check(vector<int> v){
	for(int i = 0;i<v.size() - 1;++i){
		if(v[i] > v[i+1])return "NO";
	}
	return "YES";
}

int main(){
	string str;
	cin >> str;
	string s = "hello";
	int j = 0;
	vector<int> v;
	for(int i = 0;i<str.length();++i){
		if(str[i] == s[j]){
			v.push_back(i);
			j++;
		}
	}
	if(v.size() < 5)cout << "NO";
	else cout << check(v);
}
