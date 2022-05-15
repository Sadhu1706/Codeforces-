#include <bits/stdc++.h>

using namespace std;

struct var{
	int a,b,c;
};


//operator overloading

//bool operator<(const var &x,const var &y) {return x.c < y.c;}

//sorting using comaprator

bool cmp(const var &x,const var &y) {return x.a < y.a;}

//sorting using criteria 

bool operator<(const var &x,const var &y){
	if(x.a != y.a)return x.a > y.a;
	else return x.c < y.c;
}

void solve(){
	vector<var> v;
	for(int i = 0;i < 4;++i){
		int a,b,c;
		cin >> a >> b >> c;
		v.push_back({a,b,c});
	}
	//sort(v.begin(),v.end(),cmp);
	//sorting using lambda function : 
	sort(v.begin(),v.end(),[](const var &x,const var &y) {return x.a < y.a;});
	for(var e: v)cout << e.a << " " << e.b << " " << e.c << " " << "\n";
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





