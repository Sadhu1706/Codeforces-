#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	int64_t arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	if(n % 2 == 0)cout << "YES";
	else {
		int count = 0;
		for(int i = 0;i<n-1;++i){
			if(arr[i] >= arr[i + 1]){
				count++;
				break;
			}
		}
		(count != 0)?cout << "YES":cout <<"NO";
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





