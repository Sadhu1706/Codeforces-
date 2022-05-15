#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n],temp[n+1],ans[n];
	int maxi = -1e9;
	for(int i = 0;i<n;++i){
		cin >> arr[i];
		ans[i] = arr[i];
		if(arr[i] > maxi)maxi = arr[i];
	}
	for(int i = 0;i<=n;++i){
		temp[i] = maxi;
		maxi--;
	}
	int pos[maxi + 1];
	sort(ans,ans + n,greater<int>());
	vector<pair<int,int>> v;
	int mid = floor(n/2);
	int x = mid + 1,y = mid - 1;
	//cout << x << " " << y << endl;
	int64_t sum = 0;
	for(int i = 0;i<n;++i){
		if(i % 2 == 0){
			if(x <= n){
				sum += (2* abs(temp[mid] - temp[x]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[x]));
				pos[ans[i]] = temp[x];
				x++;
			}
			else{
				sum += (2* abs(temp[mid] - temp[y]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[y]));
				pos[ans[i]] = temp[y];
				y--;
			}
		}
		else{
			if(y >= 0){
				sum += (2* abs(temp[mid] - temp[y]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[y]));
				pos[ans[i]] = temp[x];
				y--;
			}
			else{
				sum += (2* abs(temp[mid] - temp[x]) * ans[i]);
				//v.push_back(make_pair(ans[i],temp[x]));
				pos[ans[i]] = temp[y];
				x++;
			}
		}
	}
	//for(auto x: temp)cout << x << " ";
	//cout << temp[mid] << endl;
	
	//int64_t sum = 0;
	/*for(auto x: v){
		sum += (2 * abs(temp[mid] - x.second)*x.first);
	}
	*/
	cout << sum << endl;
	
	/*for(int i = 0;i<n;++i){
		cout << out[arr[i]] << " ";
	}	
	cout << endl;
	*/
	
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

