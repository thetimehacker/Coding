#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol(){
	ll mod=1000000007;
	int n,m;
	cin>>n>>m;
	vector<ll>v(n);
	unordered_map<int,int> umap;
	for(auto &x: v)cin>>x;
	for(int i=0;i<m;i++){
		ll c,noe; //number of elements
		cin>>c>>noe;
		if(umap[c]>1)continue;
		else umap[c]++;
		for(int j=0;j<noe;j++){
			ll nof, twe; //no of formation , to which element
			cin>>nof>>twe;
			v[twe-1]=(v[twe-1]+nof*v[c-1])%mod;
		}
		v[c-1]=0;
	}
	
	for(auto x:v)cout<<x<<endl;
	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}