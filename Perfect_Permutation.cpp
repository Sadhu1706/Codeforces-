#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int temp = 1;
	if(n % 2 == 1)cout << -1;
	else {
		for(int i = 0;i<n;++i){
			if(i % 2 == 0){
				cout << temp + 1 << " ";
			}
			else cout << temp - 1 << " ";
			temp++;
		}
	}
}
