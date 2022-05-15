#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	map<int,int> mp;
	for(int i = 0;i < n;++i){
		cin >> arr[i];
		mp[arr[i]]++;
	}
	if(mp.size() == 1)cout << 0;
	else {
		int maxi = INT_MIN,ans = 0;
		for(auto x: mp)if(x.second > maxi)maxi = x.second;
		int diff = n - maxi;
		/*int ans = 1,maxi = INT_MIN;
		for(auto x: mp)if(x.second > maxi)maxi = x.second;
		ans += n - maxi;
		//cout << "ceil value : " << ceil((n - maxi)/maxi) << "\n";
		//cout << "log value : " <<  ceil(log2(ceil(n - maxi)/maxi)) << "\n";
		ans += ceil(log2(ceil((n - maxi)/maxi)));
		cout << ans;
		*/
		int count = maxi;
		//ans += diff;
		do{
			ans++;
			ans += min(count,diff);
			diff -= count;
			count *= 2;
		}while(diff > 0);
		cout << ans;
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





