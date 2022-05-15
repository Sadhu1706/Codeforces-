#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	int arr[n+1];
	arr[0] = 0;
	for(int i = 1;i <n;++i){
		cin >> arr[i];
	}
	int i ,pos = 1,ans = -1;
	for(i = 1;i<=n;){
		if(pos == m){
			ans = 1;
			break;
		}
		else if(pos > m)break;
		pos += arr[i];
		i = pos;
	}
	(ans == 1)? cout << "YES":cout << "NO";
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	//int64_t test;
	//cin >> test;
	//while(test--){
		solve();
	//}
}





