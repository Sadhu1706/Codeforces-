#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,l;
	cin >> n >> l;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	string ans;
	sort(arr,arr + n);
	while(l--){
		int cnt = 0;
		for(int i = 0;i<n;++i){
			if((arr[i] & 1) == 1)cnt++;
			arr[i] >>= 1;
		}
		//cout << "current count : " << cnt << endl;
		int val;
		if(n%2 == 0)val = n/2;
		else val = n/2+1;
		
		if(cnt >= val)ans += '1';
		else ans += '0';
	}
	//cout << ans << "\n";
	reverse(ans.begin(), ans.end());
	cout << stoi(ans, 0, 2) << "\n";
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





