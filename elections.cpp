#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a,b,c;
	while(n--){
		long long int x,y,z;
		cin >> a >> b >> c;
		long long int p,q,r;
		p = max(a,b);
		q = max(b,c);
		r = max(a,c);
		if(a > q){
			x = 0;
		}
		else {
			x = q - a + 1;
		}
		if(b > r){
			y = 0;
		}
		else {
			y = r - b + 1;
		}
		if(c > p){
			z = 0;
		}
		else {
			z = p - c + 1;
		}
		cout << x << " " << y << " " << z << endl;
	}
	
}
