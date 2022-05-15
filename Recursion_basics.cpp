#include <bits/stdc++.h>

using namespace std;

int sum = 0;

int sum_of_n(int n){
	if(n == 1)return 1;
	int left = sum_of_n(n-1);
	return left + n;
}

int sum_of_digit(int n){
	if(n == 0)return 0;
	int left = sum_of_digit(n/10);
	return left + n%10;
}

void pattern_1(int n){
	if(n == 0)return;
	pattern_1(n-1);
	cout << "\n";
	for(int i = 1;i<=n;++i)cout << i << " ";
}

void pattern_2(int n){
	if(n == 0)return;
	for(int i = 1;i<=n;++i)cout << i << " ";
	cout << "\n";
	pattern_2(n-1);
}

void pattern_3(int n){
	if(n == 1){
		cout << 1 << "\n";
		return;
	}
	
	for(int i = 1;i<=n;++i)cout << i << " ";
	cout << "\n";
	pattern_3(n-1);
	for(int i = 1;i<=n;++i)cout << i << " ";
	cout << "\n";
}

int fib(int n){
	if(n == 1)return 0;
	if(n == 2)return 1;
	return fib(n-1) + fib(n-2);
}

bool pallin(string str,int i,int j){
	if(i == j || i > j)return true;
	if(str[i] != str[j])return false;
	return pallin(str,++i,--j);
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n = 123;
	int m = 5;
	//cout << sum_of_n(n) << "\n";
	//cout << sum_of_digit(n);
	//pattern_1(m);
	//cout << "\n";
	//pattern_2(m);
	//pattern_3(m);
	string str = "madam";
	//cout << fib(m);
	(pallin(str,0,4))?cout << "YES,pallindrome":cout << "NOT a pallindrome";
}





