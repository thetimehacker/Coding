#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		vector<int> v(3);
		for(auto &x:v)cin>>x;
		sort(v.begin(), v.end());
		int sum=v[1]-v[0]+v[2]-v[1];
		cout<<sum<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}