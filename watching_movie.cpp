#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x;
	cin >> n >> x;
	int arr[n],brr[n];
	for(int i = 0;i<n;++i){
		cin >> arr[i] >> brr[i];
	}
	int j = 0;
	long int count = 0;
	for(int i = 1;i<=brr[n-1];++i){
		//cout << "current i : " << i << endl;
		if(j == n)break;
		if(i == arr[j]){
			count += brr[j] - arr[j] + 1;
			//cout << "current count1: " << count << endl;
			i = brr[j];
			j++;
		}	
		else if(i + x == arr[j]){
			count += brr[j] - arr[j] + 1;
			//cout << "current count2: " << count << endl;
			i = brr[j];
			j++;
		}	
		else if(i + x > arr[j]){
			count += brr[j]-i + 1;
			//cout << "current count3: " << count << endl;
			i=brr[j];
			j++;
		}
		else if(i + x < arr[j]){
			i += x;
			i--;
		}
	}
	cout << count;
}	
