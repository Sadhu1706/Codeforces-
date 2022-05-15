#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int k;
	cin >> k;
	int t = 97,maxi = -1;
	map<char,int> mp;
	for(int i = 0;i<26;++i){
		int val;
		cin >> val;
		if(val > maxi)maxi = val;
		mp[(char)t] = val;
		t++;
	}
	//cout << "map elements: "  <<endl;
	//for(auto x: mp)cout << x.first << " " << x.second << endl;
	long long int count = 0,len = str.length();
	for(int i = 0;i<len;++i){
		count += mp[str[i]]*(i+1);
		//cout << "current count : " << count << endl;
	}
	len+=1;
	while(k--){
		count += len * maxi;
		//cout << "current count : " << count << endl;
		len++;
	}
	cout << count;
}
