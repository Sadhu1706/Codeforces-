#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[3][3];
	for(int i = 0;i<3;++i){
		for(int j = 0;j<3;++j)cin >> arr[i][j];
	}
	int b[3][3];
	for(int i = 0;i<3;++i){
		for(int j = 0;j<3;++j)b[i][j] = 1;
	}
	
	for(int i = 0;i<3;++i){
		for(int j = 0;j<3;++j){
			if(arr[i][j] %2 != 0){
				if(b[i][j] == 1)b[i][j] = 0;
				else b[i][j] = 1;
				if(i + 1 < 3){
					if(b[i + 1][j] == 1)b[i+1][j] = 0;
					else b[i+1][j] = 1;
				}
				if(i - 1 >= 0){
					if(b[i-1][j] == 1)b[i-1][j] = 0;
					else b[i-1][j] = 1;
				}
				if(j + 1 < 3){
					if(b[i][j+1] == 1)b[i][j+1] = 0;
					else b[i][j+1] = 1;
				}
				if(j - 1 >= 0){
					if(b[i][j-1] == 1)b[i][j-1] = 0;
					else b[i][j-1] = 1;
				}
			}
		}
	}
	
	for(int i = 0;i<3;++i){
		for(int j = 0;j<3;++j)cout << b[i][j];
		cout << endl;
	}
}
