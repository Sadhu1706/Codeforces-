#include <bits/stdc++.h>

using namespace std;

void solve(){
	string str;
	cin >> str;
	stack<char> stk;
	stk.push(str[0]);
	int count = 0;
	int ans = 0;
	for(int i = 1;i < str.length();++i){
		if(stk.empty())stk.push(str[i]);
		else if(stk.top() == str[i]){
			stk.pop();
			ans += count;
			count = 0;
		}
		else {
			count++;
		}
	}
	if(!stk.empty())
	while(!stk.empty()){
		ans++;
		stk.pop();
	}
	cout << ans << "\n";
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





