#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a = 0, b = 0, c = 0;
	for(int i = 1;i<=6;++i){
		//cout << "current diff : " << abs(i - n) << "->" << abs(i - m) << endl;
		if(abs(i - n) < abs(i - m))a++;
		else if(abs(i - n) > abs(i - m))c++;
		else if(abs(i - n) == abs(i - m))b++;	
	}
	cout << a << " " << b << " " << c;
}
