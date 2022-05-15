#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n,m;
		cin >> n;
		m = n;
		int arr[n];
		for(int i = 0;i<n;++i)cin >> arr[i];
		string str;
		cin >> str;
		vector<int> v1,v2;
		for(int i = 0;i<n;++i){
			if(str[i] == '1')v1.push_back(arr[i]);
			else v2.push_back(arr[i]);
		}
		map<int,int> m1,m2;
		sort(v1.rbegin(),v1.rend());
		sort(v2.rbegin(),v2.rend());
		for(auto x: v1){
			m1[x] = m;
			m--;
		}
		for(auto x: v2){
			m2[x] = m;
			m--;
		}
		for(int i = 0;i<n;++i){
			if(str[i] == '1')cout << m1[arr[i]] << " ";
			else cout << m2[arr[i]] << " ";
		}
		
		//for(auto x: m1)cout << x.first << " " ;
		//cout << endl;
		//for(auto x: m2)cout << x.first << " ";
		//cout << endl;
		/* cout << m2[1] << " " << m1[2] << endl;
		cout << m1.size() << " " << m2.size() <<endl;
		*/
		cout << endl;
	}
}
