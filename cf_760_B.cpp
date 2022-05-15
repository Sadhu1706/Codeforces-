#include <bits/stdc++.h>

using namespace std;

int main(){
	int test,n;
	cin >> test;
	while(test--){
		cin >> n;
		string str,s;
		cin >> str;
		int count = 0;
		for(int i = 1;i<n-2;++i){
			cin >> s;
			int l = str.length();
			if(str[l-1] == s[0]){
				str += s[1];
			}
			else{
				str += s;
				count = 1;
			}
		}
		if(count == 1){
			cout << str;
		}
		else{
			str += "a";
			cout << str;
		}
		cout << endl;
	}
}

