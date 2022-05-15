#include <bits/stdc++.h>

using namespace std;

string check(string str){
	string a,b;
	int n = str.length()/2;
	for(int i = 0;i<n;++i){
		a += str[i];
	}
	for(int i = n+1;i<n;++i)b += str[i];
	if(a == b)return "YES";
	return "NO";
}

void solve(){
	int n;
	cin >> n;
	int arr[n];
	map<int,int> m1,m2;
	vector<int> v1,v2;
	for(int i = 0;i<n;++i)cin >> arr[i];
	for(int i = 0;i<n/2;++i){
		m1[arr[i]]++;	
	}
	for(int i = n/2+1;i<n;++i){
		m2[arr[i]]++;
	}
	int cnt1 = 0,cnt2 = 0;
	for(auto x: m1){
		if(m2[x.first] == 0){
			cnt1++;
			v1.push_back(x.first);
		}
	}
	for(auto x: m2){
		if(m1[x.first] == 0){
			cnt2++;
			v2.push_back(x.first);
		}
	}
	string ans = "YES",del;
	if(cnt1 >= 1 && cnt2 >= 1)ans = "NO";
	else if(cnt1 > 1)ans = "NO";
	else if(cnt2 > 1)ans = "NO";
	else if(cnt1 == 1){
		int val = v1[0];
		for(int i = 0;i<n;++i)if(arr[i] != val)del += to_string(arr[i]);
		//ans = check(del);
	}
	else if(cnt2 == 1){
		int val = v2[0];
		for(int i = 0;i<n;++i)if(arr[i] != val)del += to_string(arr[i]);
	}
	else {
		int temp = 0;
		map<int,int> mp;
		if(n%2 == 1)temp == 1;
		for(int i = 0;i<n;++i){
			if(temp == 1 && i != n/2)mp[arr[i]]++;
		}
		int count = 0,val = 0;
		for(auto x: mp){
			if(x.second % 2 == 1){
				count++;
				val = x.first;
			}
		}
		if(count > 1)ans = "NO";
		else {
			//cout << "current count: " << count <<endl;
			//cout << "current val: " << val << endl;
			//for(int i = 0;i<n;++i)if(arr[i] != val)del += to_string(arr[i]);
			//ans = check(del);
			ans = "YES";
		}
	}
	//cout << "current del : " << del << endl;
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test;
	cin >> test;
	while(test--){
		solve();
	}
}





