#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n,m;
	cin >> n;
	while(n--){
		cin >> m;
		string str = to_string(m);
		long long int z = -1,f = -1,t = -1,ff = -1,s = -1,zz = -1;
		for(long long int i = 0;i<str.length();++i){
			if(str[i] == '0')z = i;
			else if(str[i] == '5')f = i;
		}
		for(long long int i = 0;i < f;++i){
			if(str[i] == '2')t = i;
			else if(str[i] == '7')s = i;
		}
		
		for(long long int i = 0;i < z;++i){
			if(str[i] == '5')ff = i;
			else if(str[i] == '0')zz = i;
		}
		long long int len = str.length();
		cout << " Length : " << len << endl;
		cout << z << " " << zz << endl;
		cout << "val : " << len - z - 1 -(z - zz -1) << endl;
		vector<long long int> v;
		if(t != -1 && f != -1)v.push_back(len - f - 1 -(f - t - 1));
		if(s != -1 && f != -1)v.push_back(len - f - 1 - (f - s - 1));
		if(ff != -1 && z != -1)v.push_back(len - z - 1 - (z - ff - 1));
		if(zz != -1 && z != -1)v.push_back(len - z - 1 -(z - zz -1));
		
		long long int val = *min_element(v.begin(),v.end());
		for(auto x: v)cout << x << " ";
		cout << endl;
		cout << val << endl;
		v.clear();
	}
}
