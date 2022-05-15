#include <bits/stdc++.h>

using namespace std;


int main(){
	int test,n,k;
	cin >> test;
	while(test--){
		cin >> n >> k;
		if(n % 2 == 0){
			if(k > n/2)cout << -1;
			else {
				int count = 0;
				for(int i = 0;i<n;i++){
					for(int j = 0;j<n;j++){
						if(i % 2 == 0 && i == j && count != k){
							cout << 'R';
							count++;
						}
						else cout << '.';
					}
					cout <<endl;
				}
			}
		}
		else{
			if(k > (n/2+1))cout << -1;
			else{
				int count = 0;
				for(int i = 0;i<n;i++){
					for(int j = 0;j<n;j++){
						if(i%2 == 0 && i == j && count != k){
							cout << 'R';
							count++;
						}
						else cout << '.';
					}
					cout << endl;
				}	
			}	
		}
		cout << endl;
	}
}
