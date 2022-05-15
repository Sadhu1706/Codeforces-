#include <bits/stdc++.h>

using namespace std;


void solve(){
	int n,q,ans = 0;
	string str,s;
	cin >> n >> q;
	cin >> str;
	int i;
	
	if(str.length() >= 3){
		for(i = 0;i< str.length()-3;++i){
			s += str[i];
			s += str[i+1];
			s += str[i+2];
			if(s == "abc")ans++;
			s.clear();
		}
		s += str[i];
		s += str[i+1];
		s += str[i+2];
		if(s == "abc")ans++;
	}
	
	while(q--){
		int val;
		char ch;
		string ss,st,sm;
		cin >> val >> ch;
		val--;
		if(str.length() < 3){
			cout << 0 << endl;
		}
		else if(val == 0){
			
			//--------------
			ss += str[val];
			ss += str[val+1];
			ss += str[val+2];
			if(ss == "abc")ans--;
			ss.clear();
			str[val] = ch;
			ss += str[val];
			ss += str[val+1];
			ss += str[val+2];
			if(ss == "abc")ans++;
			cout << ans << endl;
		}
		else if(val == 1){
			sm += str[val-1];
			sm += str[val];
			sm += str[val+1];
			if(sm == "abc")ans--;
			//-------------- for i,i+1,i+2
			ss += str[val];
			ss += str[val+1];
			ss += str[val+2];
			if(ss == "abc")ans--;
			ss.clear();
			sm.clear();
			str[val] = ch;
			ss += str[val];
			ss += str[val+1];
			ss += str[val+2];
			if(ss == "abc")ans++;
			sm += str[val-1];
			sm += str[val];
			sm += str[val+1];
			if(sm == "abc")ans++;
			cout << ans << endl;
		}
		else if(val == n-2){
			sm += str[val-1];
			sm += str[val];
			sm += str[val+1];
			if(sm == "abc")ans--;
			
			st += str[val];
			st += str[val-1];
			st += str[val-2];
			if(st == "cba")ans--;
			st.clear();
			sm.clear();
			str[val] = ch;
			sm += str[val-1];
			sm += str[val];
			sm += str[val+1];
			if(sm == "abc")ans++;
			//----------
			st += str[val];
			st += str[val-1];
			st += str[val-2];
			if(st == "cba")ans++;
			cout << ans << endl;
			
			
		}
		else if(val >= 2 && val <= n - 3){
			sm += str[val-1];
			sm += str[val];
			sm += str[val+1];
			if(sm == "abc")ans--;
			
			//-----------
			st += str[val];
			st += str[val-1];
			st += str[val-2];
			if(st == "cba")ans--;
			ss += str[val];
			ss += str[val+1];
			ss += str[val+2];
			if(ss == "abc")ans--;
			
			
			ss.clear();
			st.clear();
			sm.clear();
			str[val] = ch;
			
			//------------
			st += str[val];
			st += str[val-1];
			st += str[val-2];
			if(st == "cba")ans++;
			ss += str[val];
			ss += str[val+1];
			ss += str[val+2];
			if(ss == "abc")ans++;
			sm += str[val-1];
			sm += str[val];
			sm += str[val+1];
			if(sm == "abc")ans++;
			cout << ans << endl;
		}
		else if(val == n-1){
			st += str[val];
			st += str[val-1];
			st += str[val-2];
			if(st == "cba")ans--;
			st.clear();
			str[val] = ch;
			st += str[val];
			st += str[val-1];
			st += str[val-2];
			if(st == "cba")ans++;
			cout << ans << endl;
		}
		//cout << "current str : " << str << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test;
	//cin >> test;
	//while(test--){
		solve();
	//}
}





