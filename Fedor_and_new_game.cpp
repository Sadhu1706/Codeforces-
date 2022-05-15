#include <bits/stdc++.h>

using namespace std;

int check(int val , int n){
	int count = 0, temp = val^n;
	while(temp != 0){
		temp = temp & (temp-1);
		count++;
	}
	return count;
}

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	int arr[m+1];
	for(int i = 0;i<m+1;++i)cin >> arr[i];
	int val = arr[m];
	int count = 0;
	for(int i = 0;i<m;++i){
		if(check(val,arr[i]) <= k)count++;
	}
	cout << count;
}
