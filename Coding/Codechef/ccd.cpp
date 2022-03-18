#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		string a,b;
		cin>>a>>b;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			if(b[i]<a[i]){
				v[i]=26+b[i]-a[i];
			}
			else v[i]=b[i]-a[i];
		}
		
		for(auto x:v)cout<<x<<" ";
		int temp=v[0];
		v[0]=1;
		for(int i=1;i<n;i++){
			if(v[i]==temp){
				v[i]=v[i-1];
			}
			else{
				temp=v[i];
				v[i]=1+v[i-1];
			}
		}
		
		
		for(int i=0;i<q;i++){
			int x,y;
			cin>>x>>y;
			// if(v[x-1]==v[y-1])cout<<"YES"<<endl;
			// else cout<<"NO"<<endl;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}