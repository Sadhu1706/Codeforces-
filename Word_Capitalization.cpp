#include <bits/stdc++.h>

using namespace std;

int main(){
	string str,s;
	cin >> str;
	int n = str.length();
	s += toupper(str[0]);
	for(int i = 1;i<n;++i){
		s += str[i];
	}
	cout << s;
}
