#include <bits/stdc++.h>

using namespace std;

const unsigned int M = 1000000007;

int main(){
	string str,s;
	cin >> str;
	s = str;
	int temp = -1,pos;
	long long int len = str.length();
	for(long long int i = 0;i<len;++i){
		long long int val = str[i] - '0';
		if(val % 2 == 0){
			temp = val;
			pos = i;
		}
		if(val % 2 == 0 && str[i] < str[len - 1]){
			char a = str[i];
			s[i] = s[len-1];
			s[len-1] = a;
			break;
		}
	}
	if(str != s)cout << s;
	else {
		if(temp != -1){
			char a = str[pos];
			s[pos] = s[len - 1];
			s[len -1] = a;
			cout << s;
		}
		else cout << -1;
		
	}
}
