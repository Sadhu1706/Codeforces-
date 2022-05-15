#include <iostream>

using namespace std;

int main(){
	string str,s;
	cin >> str >> s;
	for(int i = 0;i<str.length();++i){
		if(str[i] != s[i])cout << 1;
		else cout << 0;
	}
}
