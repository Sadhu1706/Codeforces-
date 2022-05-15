#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	string str;
	for(int i = 0;i<n;++i){
		char ch;
		cin >> ch;
		str += ch;
	}
	int x,y,zero,one,ans = 0;
	zero = count(str.begin(),str.end(),'0');
	one =  count(str.begin(),str.end(),'1');
	for(int i = 0;i<str.length();++i){
		if(str[i] == '0'){
			x = i;
			break;
		}
	}
	for(int i = str.length()-1;i >= 0;--i){
		if(str[i] == '0'){
			y = i;
			break;
		}
	}
	//cout << "current x and y : " << x << " " << y << "\n";
	if(one == str.length() && one == 1)cout << 0;
	else if(one == str.length())cout << str.length() - 1;
	else {
		one -= (x + (str.length()- y - 1));
		for(int i = y;i>=0;--i){
			//cout << "current zero and one : " << zero << " " << one << "\n";
			int val = ceil((double)zero/2);
			if(val > one){
				ans = i;
				break;
			}
			if(str[i] == '0')zero--;
			else one--;
		}
		for(int i = x;i<=ans;++i){
			if(str[i] == '0')str[i] = '1';
			else str[i] = '0';
		}
		int count = 0;
		for(int i = 0;i<str.length();++i){
			if(str[i] == '1')count++;
		}
		cout << count;
	}	
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





