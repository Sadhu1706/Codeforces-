#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	for(auto x: str){
		if(tolower(x) != 'a' && tolower(x) != 'e' && tolower(x) != 'i' &&
		tolower(x) != 'o' && tolower(x) != 'u' && tolower(x) != 'y'){
			cout << '.';
			cout << (char)tolower(x);
		}
	}
}
