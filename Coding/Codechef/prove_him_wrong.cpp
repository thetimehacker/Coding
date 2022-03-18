#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	int limit=1000000000;
	while(t--){
		int n;
		cin>>n;
		vector<long long>v(n);
		v[0]=1;
		bool flag=true;
		for(int i=1;i<n;i++){
			v[i]=v[i-1]*3;
			if(v[i]>limit){
				flag=false;
			}
		}
		
		if(flag){
			cout<<"YES\n";
			for(auto x:v)cout<<x<<" ";
			cout<<endl;
		}
		else cout<<"NO\n";
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}