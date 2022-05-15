#include <iostream>

using namespace std;

int main(){
	string str,s;
	cin >> str;
	int l = 0,u = 0;
	for(auto x: str){
		if(islower(x))l++;
		else u++;
	}
	int temp = 1;
	if(l >= u)temp = 0;
	if(temp == 0){
		for(auto x: str)s += tolower(x);
	}
	else {
		for(auto x: str)s += toupper(x);
	}
	cout << s;
}
