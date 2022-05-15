#include <bits/stdc++.h>

using namespace std;

int check(string str){
	int count = 0;
	for(auto x: str){
		if(x == '4' || x == '7'){
			count++;
		}
	}
	//cout << "current count : " << count << endl;
	return count;
}

bool check_lucky(long int n){
	if(n == 0)return false;
	while(n > 0){
		if(n%10 != 4 && n%10 != 7)return false;
		n/=10;
	}
	return true;
}

int main(){
	string str;
	cin >> str;
	int temp = check(str);
	//cout << "current temp : " << temp << endl;
	if(check_lucky(temp) == true)cout << "YES";
	else cout << "NO";
}
