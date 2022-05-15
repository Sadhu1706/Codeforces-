#include <bits/stdc++.h>

using namespace std;

void solve(){
	string str,ans,temp;
	int n;
	cin >> n >> str;
	int cnt = 0;
	for(int i = 0;i<n-1;++i){
		if(str[i] < str[i+1]){
			//cout << 1 << endl;
			ans += str[i];
			cnt = -1;
			break;
		}	
		else if(str[i] == str[i+1]){
			if(i == 0){
				ans += str[i];
				cnt = -1;
				break;
			} 
			else ans += str[i];
		}
		else{
			ans += str[i];
		}
	}
	if(cnt != -1){
		temp = str;
		//cout << "current str : " << str << endl;
		reverse(temp.begin(),temp.end());
		cout << str + temp;
	}
	else{
		temp = ans;
		reverse(temp.begin(),temp.end());
		ans += temp;
		cout << ans;
	}
	cout << endl;
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






