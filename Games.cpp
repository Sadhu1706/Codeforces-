#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int,int> m1,m2;
	for(int i = 0;i<n;++i){
		int a,b;
		cin >> a >> b;
		m1[a]++;
		m2[b]++;
	}
	int count = 0;
	for(auto x: m1){
		count += m2[x.first] * x.second;
	}
	cout << count;
}
