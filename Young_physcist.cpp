#include <iostream>

using namespace std;

int main(){
		int n;
		cin >> n;
		int arr[n][3];
		for(int i = 0;i<n;++i){
			for(int j = 0;j<3;++j){
				cin >> arr[i][j];
			}
		}
		int temp[3];
		for(int j = 0;j<3;++j){
			int count = 0;
			for(int i = 0;i<n;++i){
				count += arr[i][j];
			}
			temp[j] = count;
		}
		int c = 0;
		for(int i = 0;i<3;++i){
			if(temp[i] != 0){
				c = 1;
				break;
			}
		}
		if(c == 0)cout << "YES";
		else cout << "NO"; 
}
