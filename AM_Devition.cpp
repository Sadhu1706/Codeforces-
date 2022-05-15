#include <bits/stdc++.h>

using namespace std;

int main(){
	int test,a ,b,c;
	cin >> test;
	while(test--){
		int sum = 0;
		cin >> a >> b >> c;
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());
		sum = abs(abs(v[1] - v[0]) - abs(v[1] - v[2]));
		//cout << "current sum: " << sum << endl;
		if(sum % 3 == 0)cout << 0;
		else cout << 1;
		cout << endl;
	}	
}
