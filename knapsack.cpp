#include <bits/stdc++.h>

using namespace std;

int knapsack(int weight[],int value[],int i ,int n,int w,int W,int sum,int &maxi){
	if(i >= n){
		if(W <= w){
			maxi = max(maxi,sum);
			return maxi;
		}
		return maxi;
	}
	sum += value[i];
	W += weight[i];
	knapsack(weight,value,i+1,n,w,W,sum,maxi);
	sum -= value[i];
	W -= weight[i];
	return knapsack(weight,value,i+1,n,w,W,sum,maxi);
}

void solve(){
	int n ,w;
	cin >> n >> w;
	int weight[n],value[n],maxi = 0;
	for(int i = 0;i<n;++i){
		cin >> weight[i] >> value[i];
	}
	
	cout << knapsack(weight,value,0,n,w,0,0,maxi);
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int64_t test = 1;
	//cin >> test;
	while(test--){
		solve();
	}
}





