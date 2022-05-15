#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	vector<int> v;
	cin >> str;
	for(auto x: str){
		if(x != '+')v.push_back(x -'0');	
	}
	sort(v.begin(),v.end());
	if(v.size() == 1)cout << str;
	else {
		int count = 1;
		for(auto x: v){
			cout << x;
			if(count < v.size())cout << "+";
			count++;
		}	
	}
}
