#include <bits/stdc++.h>

using namespace std;

void solve(){
	int64_t hc,dc,hm,dm,w,a,k;
	cin >> hc >> dc >> hm >> dm >> k >> w >> a;
	hc += (k * a);
	dc += (k * w);
	int64_t t = 0;
	//cout << hc << " " << dc << "\n";
	while(true){
		if(hc <= 0 || hm <= 0)break;
		if((t & 1) == 0){
			hm -= dc;
		}
		else {
			hc -= dm;
		}
		t++;
	}
	//cout << "current hc and hm " << hc << " " << hm << "\n";
	if(hc <= 0)cout << "NO";
	else cout << "YES";
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





