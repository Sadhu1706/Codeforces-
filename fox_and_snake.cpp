#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	char arr[n][m];
	for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j)arr[i][j] = '.';
	}
	int count = 0;
	for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j){
			if(i % 2 == 0){
				arr[i][j] = '#';
			}
			else{
				if(count == 0){
					arr[i][m-1] = '#';
					count = 1;
				}
				else{
					arr[i][0] = '#';
					count = 0;
				}
				break;
			}
		}
	}
	for(int i = 0;i<n;++i){
		for(int j = 0;j<m;++j)cout << arr[i][j];
		cout << endl;
	}
}
