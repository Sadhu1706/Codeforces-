#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a,b,c;
	for(int i = 0;i<n;++i){
		int val;
		cin >> val;
		if(val == 1)a.push_back(i);
		else if(val == 2)b.push_back(i);
		else c.push_back(i);
	}
	if(a.size() == 0 || b.size() == 0 || c.size() == 0)cout << 0;
	else {
		int mini = min(a.size(),min(b.size(),c.size()));
		cout << mini << endl;
		for(int i = 0;i<mini;++i){
			cout << a[i] + 1 << " " << b[i] + 1 << " " << c[i] + 1 << endl;
		}
	}
}
