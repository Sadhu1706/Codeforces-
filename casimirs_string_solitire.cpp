#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str;
	while(n--){
		cin >> str;
		int a = 0,b = 0,c = 0;
		for(auto x: str){
			if(x == 'A')a++;
			else if(x == 'B')b++;
			else if(x == 'C')c++;
		}
		if((a + c) == b)cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
