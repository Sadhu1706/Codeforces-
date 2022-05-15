#include <bits/stdc++.h>

using namespace std;

int main(){
	int64_t test,w,k,h;
	cin >> test;
	while(test--){
		cin >> w >> h;
		vector<int64_t> x1,x2,y1,y2;
		cin >> k;
		for(int64_t i = 0;i < k;++i){
			int64_t val;
			cin >> val;
			x1.push_back(val);
		}
		cin >> k;
		for(int64_t i = 0;i < k;++i){
			int64_t val;
			cin >> val;
			x2.push_back(val);
		}
		cin >> k;
		for(int64_t i = 0;i < k;++i){
			int64_t val;
			cin >> val;
			y1.push_back(val);
		}
		cin >> k;
		for(int64_t i = 0;i < k;++i){
			int64_t val;
			cin >> val;
			y2.push_back(val);
		}
		int64_t a,b;
		a = *max_element(x1.begin(),x1.end());
		b = *min_element(x1.begin(),x1.end());
		vector<int64_t> ans1,ans2;
		for(auto x: x2){
			int64_t k1,k2,k3,l1,l2,l3;
			k1 = a;l1= 0;
			k2 = b;l2 = 0;
			k3 = x;l3 = h;
			ans1.push_back((abs(k1*(l2-l3) + k2*(l3-l1) + k3*(l1 - l2))));
		}
		a = *max_element(x2.begin(),x2.end());
		b = *min_element(x2.begin(),x2.end());
		for(auto x: x1){
			int64_t k1,k2,k3,l1,l2,l3;
			k1 = a;l1 = h;
			k2 = b;l2 = h;
			k3 = x;l3 = 0;
			ans1.push_back((abs(k1*(l2-l3) + k2*(l3-l1) + k3*(l1 - l2))));
		}
		a = *max_element(y1.begin(),y1.end());
		b = *min_element(y1.begin(),y1.end());
		for(auto x: y2){
			int64_t k1,k2,k3,l1,l2,l3;
			k1 = 0;l1 = a;
			k2 = 0;l2 = b;
			k3 = w;l3 = x;
			ans2.push_back((abs(k1*(l2-l3) + k2*(l3-l1) + k3*(l1 - l2))));
		}
		a = *max_element(y2.begin(),y2.end());
		b = *min_element(y2.begin(),y2.end());
		for(auto x: y2){
			int64_t k1,k2,k3,l1,l2,l3;
			k1 = w;l1 = a;
			k2 = w;l2 = b;
			k3 = 0;l3 = x;
			ans2.push_back((abs(k1*(l2-l3) + k2*(l3-l1) + k3*(l1 - l2))));
		}
		//areas
		/*cout << "for first : " << endl;
		for(auto x: ans1)cout << x << " ";
		cout << "\n for second : " << endl;
		for(auto x: ans2)cout << x << " ";
		*/
		int64_t mx1 = *max_element(ans1.begin(),ans1.end());
		int64_t mx2 = *max_element(ans2.begin(),ans2.end());
		cout << max(mx1,mx2) << endl;
	}
}






