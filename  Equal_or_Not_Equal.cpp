#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		string str;
		cin >> str;
		int n = str.length();
		int arr[n];
		arr[0] = 1;
		int j = 1;
		for(int i = 0;i<n-1;++i){
			if(str[i] == 'E'){
				arr[j] = arr[i];
			}
			else arr[j] = arr[i] + 1;
			j++;
		}
		//for(int i = 0;i<n;++i)cout << arr[i] << " ";
		if(str[n-1] == 'E'){
			if(arr[n-1] == arr[0])cout << "YES";
			else if(str[n-2] == 'N' && n-2 != 0)cout << "YES";
			else cout << "NO";
		}
		else {
			if(arr[n-1] != arr[0])cout << "YES";
			else cout << "NO";
		}
		cout << endl;
	}
}
