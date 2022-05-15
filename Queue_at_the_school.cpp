#include <bits/stdc++.h>

using namespace std;

int main(){
		int n,t;
		string str;
		cin >> n >> t;
		char arr[n];
		cin >> str;
		for(int i = 0;i<n;++i){
				arr[i] = str[i];
		}
		while(t--){
				for(int i = 0;i<n;++i){
						if(i + 1 < n && arr[i] == 'B' && arr[i+1] == 'G'){
							swap(arr[i],arr[i+1]);
							i++;
						}
				}
		}
		for(int i = 0;i<n;++i)cout << arr[i];
			
}
