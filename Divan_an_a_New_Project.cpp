#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t n;
	cin >> n;
	int64_t arr[n],temp[n+1],ans[n];
	int64_t maxi = INT_MIN;
	for(int64_t i = 0;i<n;++i){
		cin >> arr[i];
		ans[i] = arr[i];
		if(arr[i] > maxi)maxi = arr[i];
	}
	//cout << "current maxi : " << maxi << endl;
	for(int64_t i = 0;i<=n;++i){
		temp[i] = maxi;
		maxi--;
	}
	sort(ans,ans + n,greater<int64_t>());
	vector<pair<int64_t,int64_t> > v;
	int mid = floor(n/2);
	int x = mid + 1,y = mid - 1;
	//cout << x << " " << y << endl;
	
	multimap <int64_t,int64_t> mp;
	int64_t sum = 0;
	for(int i = 0;i<n;++i){
		if(i % 2 == 0){
			if(x <= n){
				sum += (int64_t)(2* abs(temp[mid] - temp[x]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[x]));
				mp.insert({ans[i],temp[x]});
				x++;
			}
			else{
				sum += (int64_t)(2* abs(temp[mid] - temp[y]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[y]));
				mp.insert({ans[i],temp[y]});
				y--;
			}
		}
		else{
			if(y >= 0){
				sum += (int64_t)(2* abs(temp[mid] - temp[y]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[y]));
				mp.insert({ans[i],temp[y]});
				y--;
			}
			else{
				sum += (2* abs(temp[mid] - temp[x]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[x]));
				mp.insert({ans[i],temp[y]});
				x++;
			}
		}
	}
	
	//for(auto x: mp)cout << x.first << " " << x.second << endl;
	cout << sum << endl;
	cout << temp[mid] << " ";
	for(int64_t i = 0;i<n;++i){
		auto it = mp.find(arr[i]);
		cout << it -> second << " ";
		mp.erase(it);
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






