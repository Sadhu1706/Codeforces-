#include <bits/stdc++.h>

using namespace std;

vector<string> vect{"22","25","27","33","32","35","55","52","57","77","72","75"};

void solve(){
	int64_t k,p1 = INT_MAX,p2 = INT_MAX,p3 = INT_MAX,p4 = INT_MAX,i = 0;
	string str;
	cin >> k >> str;
	map<int64_t,int64_t> mp,mp1;
	for(auto x: str){
		int val = x - '0';
		if(val % 2 == 0 && val != 2 || val == 1 || val == 9)mp[val]++;
		else{
			mp1[val]++;
			if(val == 2)p1 = min(i ,p1);
			else if(val == 3)p2 = min(i ,p2);
			else if(val == 5)p3 = min(i ,p3);
			else if(val == 7)p4 = min(i, p4);
		}
		i++;
	}
	auto it = mp.begin();
	if(!mp.empty())cout << 1 << "\n" << it -> first;
	else{
		if(mp1[2] > 1)cout << 2 << "\n" << 22;
		else if(mp1[3] > 1)cout << 2 << "\n" << 33;
		else if(mp1[5] > 1)cout << 2 << "\n" << 55;
		else if(mp1[7] > 1)cout << 2 << "\n" << 77;
		else{
			string ans;
			vector<int> store;
			if(p1 != INT_MAX)store.push_back(p1);
			if(p2 != INT_MAX)store.push_back(p2);
			if(p3 != INT_MAX)store.push_back(p3);
			if(p4 != INT_MAX)store.push_back(p4);
			sort(store.begin(), store.end());
			for(auto x: store)ans += str[x];
			//cout << ans << endl;
			vector<string> v;
			//cout << typeid(ans).name() << endl;
			for(int i = 0;i<ans.length();++i){
				for(int j = 0;j<ans.length();++j){
					string s;
					s += ans[i];s += ans[j];
					if(i != j)v.push_back(s);
				}
			}
			for(auto x: v){
				auto it = find(vect.begin(),vect.end(),x);
				if(it != vect.end()){
					//cout << "ans : "; 
					cout << 2 << "\n" << x;
					break;
				}
			}
		}
	}
	cout << "\n";
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
