#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> v(n);
		for(auto &x : v)cin>>x;
		int mn=INT_MAX,mni;
		int mx=INT_MIN,mxi;
		for(int i=0;i<n;i+=2){
			if(abs(v[i])<mn){
				mn=abs(v[i]);
				mni=i;
			}
		}
		for(int i=1;i<n;i+=2){
			if(abs(v[i])>mx){
				mx=abs(v[i]);
				mxi=i;
			}
		}
		
		
		if(abs(v[mni])<abs(v[mxi]))
			swap(v[mni],v[mxi]);
		
		ll sum=0;
		for(int i=0;i<n;i++){
			if(i&1)sum-=abs(v[i]);
			else sum+=abs(v[i]);
		}
		
		cout<<sum<<endl;
	
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}