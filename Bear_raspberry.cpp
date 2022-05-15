#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c;
	cin >> n >> c;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int maxi = 0;
	for(int i = 0;i<n-1;++i){
		if(arr[i] - arr[i + 1] > maxi)maxi = arr[i] - arr[i + 1];
	}
	if(maxi >= c)cout << maxi - c;
	else cout << 0;
}
