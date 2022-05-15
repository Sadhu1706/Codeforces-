#include <bits/stdc++.h>

using namespace std;

int main(){
		string str;
		cin >> str;
		int n = str.length();
		string s;
		for(int i = 0;i<n;++i){
			if(str[i] == '.')s += '0';
			else if(i + 1 < n && str[i] == '-' && str[i+1] == '.'){
				s += '1';
				i++;
			}
			else if(i + 1 < n && str[i] == '-' && str[i+1] == '-'){
				s += '2';
				i++;
			}
		}
		cout << s;
}
