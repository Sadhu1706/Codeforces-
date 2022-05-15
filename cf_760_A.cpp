#include <bits/stdc++.h>

using namespace std;

int main(){
	long int test;
	cin >> test;
	while(test--){
		long int arr[7];
		map<long long int , int> mp;
		for(int i = 0;i<7;++i){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		long int max = arr[6];
		long int sum = arr[0] + arr[1] + arr[2];
		long int diff = max - sum;
		//cout << "current max : " << max << endl;
		if(sum == max){
			cout << arr[0] << " " << arr[1] << " " << arr[2];
		}
		else {
			if(mp[arr[0] + diff] > 1){
				//cout << "1\n";
				cout << arr[0] + diff << " " << arr[1] << " " << arr[2];
			}
			else if(mp[arr[1] + diff] > 1){
				//cout << "2\n";
				cout << arr[0] << " " << arr[1] + diff << " " << arr[2];
			}	
			else{
				//cout << "3\n";
				cout << arr[0] << " " << arr[1] << " " << max - arr[2];
			}	
		}	
		cout << endl;
		
	}
}
