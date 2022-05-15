#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int a,b,c;
		cin >> a >> b >> c;
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin() ,v.end());
		if(v[0] + v[1] == v[2])cout << "YES";
		else {
			if(a == b && c % 2 == 0)cout << "YES";
			else if(b == c && a % 2 == 0)cout << "YES";
			else if(c == a && b % 2 == 0)cout << "YES";
			else cout << "NO";	
		}
		cout << endl;
	}
}
