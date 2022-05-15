#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	vector<int> odd,even;
	for(int i = 0;i<n;++i){
		int val;
		cin >> val;
		if((val & 1) == 1)odd.push_back(val);
		else even.push_back(val);
	}
	bool o = true,e = true;
	if(odd.size() != 0){
		for(int i = 0;i<odd.size() - 1;++i){
			if(odd[i] > odd[i+1]){
				o = false;
				break;
			}
		}
	}
	if(even.size() != 0){
		for(int i = 0;i<even.size() - 1;++i){
			if(even[i] > even[i + 1]){
				e = false;
				break;
			}
		}
	}
	(o && e)?cout << "Yes\n":cout << "No\n";
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





