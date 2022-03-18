#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		vector<int> a(1,1);
		vector<int> b=a;
		b.push_back(2);
		a=b;
		a.push_back(3);
		for(auto x:b)cout<<x<<" ";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}