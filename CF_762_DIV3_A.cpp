#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		string str;
		cin >> str;
		int n = str.length();
		if(n%2 != 0){
			cout << "NO";
		}
		else {
			string s1,s2;
			for(int i = 0;i<n/2;++i)s1 += str[i];
			for(int i = n/2;i<n;++i)s2 += str[i];
			if(s1 == s2)cout << "YES";
			else cout << "NO";
		}
		cout << "\n";
	}
}
