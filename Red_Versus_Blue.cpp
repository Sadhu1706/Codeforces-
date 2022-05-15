#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,r,b;
	cin >> n >> r >> b;
	string str;
	if(b == 1){
		if(r % 2 != 0){	
			str.insert(0,r/2 + 1,'R');
			str += 'B';
			str.insert(r/2 + 2,r/2,'R');
		}
		else{
			str.insert(0,r/2,'R');
			str += 'B';
			str.insert(r/2 + 1,r/2,'R');
		}
	}
	else {
		int rem = r % (b + 1);
		int val = (r)/(b + 1);
		int i = 0;
		b++;
		while(b--){
			str.insert(i,val,'R');
			i += val + 1;
			if(b != 0)str += 'B';
		}	
		if(rem != 0){
			int k = 0;
			str.insert(0,1,'R');
			rem--;
			while(true){
				if(rem == 0)break;
				if(str[k] == 'B'){
					//cout << "current str : " << str << "\n";
					str.insert(k + 1,1,'R');
					rem--;
				}
				k++;
			}
		}
	}
	cout << str << "\n";
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





