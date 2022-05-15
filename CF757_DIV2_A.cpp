#include <bits/stdc++.h>

using namespace std;

int main(){
	long int test,n,l,r,k;
	cin >> test;
	while(test--){
		cin >> n >> l >> r >> k;
		long int arr[n];
		for(long int i = 0;i<n;++i)cin >> arr[i];
		sort(arr,arr + n);
		long int count = 0,cnt = 0;
		for(long int i = 0;i<n;++i){
			if(count >= k)break;
			if(arr[i] >= l && arr[i] <= r){
					count += arr[i];
					if(count > k)break;
					cnt++;
			}
		}
		cout << cnt << endl;
	}
}
