#include <bits/stdc++.h>

using namespace std;

#define debug(x) cerr << #x << " " << x << endl;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;++i)cin >> arr[i];
	int count = 0;
	int k = 0;
	for(int i = 0;i<n-1;++i){
		if(arr[i] - arr[i+1] > 0){
			count++;
			k = i + 1;
		}
	}
	debug(k);
	debug(count);
	if(arr[n - 1] > arr[0] && count == 1)cout << -1;
	else {
		/*if(k == n-1 && count == 1){
			if(arr[k] <= arr[0])cout << 1;
			else cout << -1;
		}
		*/
		if(count > 1)cout << -1;
		else if(count == 0)cout << 0;
		else cout << n - k;
	}
}
