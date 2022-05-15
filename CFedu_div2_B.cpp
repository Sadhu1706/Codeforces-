#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n ,m;
	cin >> n >> m;
	char arr[n][m];
	for(int i = 0;i < n;++i){
		string str;
		cin >> str;
		for(int j = 0;j < m;++j)arr[i][j] = str[j];
	}
	vector<int> r,c,dis;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j){
			if(arr[i][j] == 'R'){
				r.push_back(j);
				c.push_back(i);
				dis.push_back(i + j);
			}
		}
	}
	int rmax,cmax;
	rmax = *min_element(r.begin() ,r.end());
	cmax = *min_element(c.begin(), c.end());
	if(find(dis.begin(),dis.end() ,rmax + cmax) != dis.end())cout << "YES";
	else cout << "NO";
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





