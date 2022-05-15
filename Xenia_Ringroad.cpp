#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n,m;
	cin >> n >> m;
	long long int arr[m];
	for(long long int i = 0;i<m;++i)cin >> arr[i];
	long long int k = 1,count = 0;
	for(long long int i = 0;i<m;++i){
		if(arr[i] > k){
			count += arr[i] - k;
			k = arr[i];
		}
		else if(arr[i] < k){
			count += n - k;
			count += arr[i] - 1;
			count++;
			k = arr[i];
		}
	}
	cout << count;
}
