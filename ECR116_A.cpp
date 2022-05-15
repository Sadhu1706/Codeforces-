#include <bits/stdc++.h>

using namespace std;

int check(string str, string s){
	for(int i = 0;i<str.length();++i){
		if(tolower(str[i]) < tolower(s[i]))return -1;
		else if(tolower(str[i]) > tolower(s[i]))return 1;
	}
	return 0;
}

int main(){
	string str,s;
	cin >> str >> s;
	cout << check(str,s);
}
