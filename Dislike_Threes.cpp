#include <iostream>

using namespace std;

bool check(int temp){
	int count = 0;
	while(temp > 0){
		if(temp%10 == 3){
			count = 1;
			break;
		}
		temp/=10;
	}
	if(count == 0)return true;
	return false;
}	

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, count = 1;
		cin >> n;
		int temp = 1;
		while(1){
			if(count == n){
				break;
			}
			if(check(temp)){
				count++;
				temp++;
			}	
		}
		cout << temp << endl;
	}
}
