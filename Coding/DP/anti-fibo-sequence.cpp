#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		int m=n;
		for(auto &x:v){
			x=m;
			m--;
		}
		for(auto x:v)cout<<x<<" ";
		cout<<endl;
		for(int i=0;i<n-1;i++){
			swap(v[n-1-i],v[n-2-i]);
			for(auto x:v)cout<<x<<" ";
			cout<<endl;
		}
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}