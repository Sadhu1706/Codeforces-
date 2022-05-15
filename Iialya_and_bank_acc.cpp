#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n >= 0)cout << n;
	else {
		string str = to_string(n);
		string s;
		int len = str.length();
		//cout << "length is : " << len << endl;
		int k = 0,l = 0;
		if(str[len - 1] <= str[len - 2]){
			for(auto x: str){
				if(k != len - 2){
					s += x;
			//		cout << "current x: " << x << endl;
				}
				k++;
			}
		}
		else {
			for(auto x: str){
				if(l != len - 1)s += x;
				l++;
			}
		}
		if(s.length() == 2 && s[1] == '0')cout << 0;
		else cout << s;
	}
}
