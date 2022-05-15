#include <bits/stdc++.h>

using namespace std;

void solve(){
	int r,x,y ,x1,y1;
	cin >> r >> x >> y >> x1 >> y1;
	int dis = ceil(sqrt(pow(abs(x - x1),2) + pow(abs(y - y1),2)));
	//cout << dis << "\n";
	(dis % (2*r) == 0)?cout << dis/(2*r):cout << dis/(2*r) + 1;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test = 1;
	//cin >> test;
	while(test--){
		solve();
	}
}





