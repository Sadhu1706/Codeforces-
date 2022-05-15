#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int sum = 0, count = 0,tot = 0;
	for(int i = 0;i<n;++i){
		cin >> arr[i];
		tot += arr[i];
	}
	sort(arr,arr + n,greater<int>());
	for(int i = 0;i<n;++i){
		sum += arr[i];
		tot -= arr[i];
		count++;
		if(sum > tot)break;
	}
	cout << count;
}
