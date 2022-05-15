#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,a,b,c;
	cin >> n >> a >> b >>c;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	a = v[0];b=v[1];c=v[2];
	vector<int> ans;
	int len = ceil((double)n/c) * c;
	for(int i=0;i<=len;++i){
		for(int j = 0;j<=len;++j){
			int val = a * i + b * j;
			int diff = n - val;
			//cout << "current val : " << val << "\n";
			//if(diff >= 0)cout << "current diff : " << diff << "\n";
			if(diff >= 0 && (diff % c) == 0){
				//cout << "current i and j : " << i << " " << j << "\n";
				ans.push_back(i + j + diff/c);
			}
		}
	}
	//cout << "vector elemnts :\n";
	//for(auto x: ans)cout << x << " ";
	//cout << "\n";
	cout << *max_element(ans.begin(),ans.end());
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test = 1;
	//cin >> test;
	while(test--){
		solve();
	}
}





