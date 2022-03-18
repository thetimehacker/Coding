#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int x,a,b,c;
		cin>>x>>a>>b>>c;
		vector<int> v{a,b,c};
		sort(v.begin(),v.end());
		cout<<v[0]*(x-1)+v[1]<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}