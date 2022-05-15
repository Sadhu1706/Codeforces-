#include <iostream>

using namespace std;

bool find(int n){
	if(n <= 1)return false;
	for(int i = 2;i<n;++i){
		if(n % i == 0)return false;
	}
	return true;
}

int main(){
	int n,m;
	cin >> n >> m;
	int count=0;
	while(1){
		n++;
		if(find(n) == true){
			if(count = 0 && n == m){
				cout << "YES";
				break;
			}
			count = 1;
		}
		if(n > m){
			cout << "NO";
			break;
		}
	}
}
