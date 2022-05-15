#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,count = 0;
	cin >> n >> m;
	while(n != 0 && m != 0){
		n--;
		m--;
		if(n == 0 || m == 0)break;
		count++;
	}
	(count % 2 == 0)?cout << "Akshat":cout << "Malvika";
}
