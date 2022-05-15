#include <bits/stdc++.h>

using namespace std;

int main(){
	int r,c;
	cin >> r >> c;
	char arr[r][c];
	for(int i = 0;i<r;++i){
		for(int j = 0;j<c;++j)cin >> arr[i][j];
	}
	int count = 0;
	for(int i = 0;i<r;++i){
		count = 0;
		for(int j = 0;j<c;++j){
			if(arr[i][j] == 'S'){
				count = 1;
				break;
			}
		}
		if(count == 0){
			for(int k = 0;k<c;++k)arr[i][k] = 'g';
		}
	}
	for(int i = 0;i<c;++i){
		count = 0;
		for(int j = 0;j<r;++j){
			if(arr[j][i] == 'S'){
				count = 1;
				break;
			}
		}
		if(count == 0){
			for(int k = 0;k<r;++k)arr[k][i] = 'g';
		}
	}
	int temp = 0;
	for(int i = 0;i<r;++i){
		for(int j = 0;j<c;++j)if(arr[i][j] == 'g')temp++;
	}
	cout << temp;
}
