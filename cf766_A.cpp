#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,m,r,c;
	cin >> n >> m >> r >> c;
	int arr[n][m];
	int cnt = 0;
	for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j){
			char a;
			cin >> a;
			if(a == 'W')arr[i][j] = 0;
			else {
				arr[i][j] = 1;
				cnt = 1;
			}
		}
	}
	
	/*for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j)cout << arr[i][j] << " ";
		cout << endl;
	}
	*/
	if(cnt == 0)cout << -1;
	else if(arr[r-1][c-1] == 1)cout << 0;
	else {
		int temp = 0;
		for(int i = 0;i<n;++i){
			if(arr[i][c-1] == 1){
				temp = 1;
				break;
			}
		}
		int k = 0;
		for(int i = 0;i<m;++i){
			if(arr[r-1][i] == 1){
				k = 1;
				break;
			}
		}
		//cout << temp << " " << k << endl;
		if(k == 1 || temp == 1)cout << 1;
		else cout << 2;
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





