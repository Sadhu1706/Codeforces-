#include <bits/stdc++.h>

using namespace std;

void solve(){
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(abs(x1) == abs(x2) && abs(y1) == abs(y2)){
		cout << abs(x1) + abs(y1) << " " << y1 << " " << abs(x2) + abs(y2)  << " " << y2	;
	}
	else if(x1 == x2){
		int dis = abs(y2 - y1);
		cout << dis << " " <<  y1 << " "  << dis << " " << y2;
		
	}
	else if(y1 == y2){
		int dis = abs(x2 - x1);
		cout << dis << " " << x1 << " " << dis << " " << x2;
		
	}
	else cout << -1;
	cout << "\n";
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





