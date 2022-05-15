#include <bits/stdc++.h>

using namespace std;

int main(){
	long int n,m;
	cin >> n >> m;
	long int arr[n];
	for(long int i = 0;i<n;++i)cin >> arr[i];
	long int maxi = 0;
	sort(arr,arr + n);
	for(long int i = 0;i< n - 1;++i){
		if(arr[i + 1] - arr[i] > maxi)maxi = arr[i + 1] - arr[i];
	}
	double val = (double)maxi/(double)2;
	if(arr[n - 1] == m && arr[0] == 0){
		cout << fixed << setprecision(10) << val;
	}
	else if(arr[0] != 0 && arr[n - 1] == m){
		(val > arr[0])?cout << fixed << setprecision(10) << val:
		cout << fixed << setprecision(10) << (double)arr[0];
	}
	else if(arr[0] == 0 && arr[n-1] != m){
		long int t = m - arr[n-1];
		(val > t)?cout << fixed << setprecision(10) << val:
		cout << fixed << setprecision(10) << (double)t;
	}
	else {
		long int t = m - arr[n-1];
		if(val > arr[0] && val > t)cout << fixed << setprecision(10) << val;
		else cout << fixed << setprecision(10) << (double)max(arr[0],t);
	}
	cout << endl;
/*	(val > arr[0] && val > t)?cout << fixed << setprecision(10) << val:
	cout << fixed << setprecision(10) << (double)arr[0];*/
	//if(arr[0] == 0)cout << fixed << setprecision(10) << val;
	//else cout << fixed << setprecision(10) << (double)arr[0];
}
