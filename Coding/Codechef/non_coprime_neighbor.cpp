#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(auto &x:v)cin>>x;
		
		if(n%3==0||n%3==1){
			for(int i=1;i<n-1;i+=3){
				v[i-1]=2*v[i];
				v[i+1]=2*v[i];
			}
			if(n%3==1)v[n-1]=v[n-2];
		}
		else{
			//when n%3==2
			for(int i=2;i<n;i+=3){
				v[i-1]=2*v[i];
				v[i+1]=2*v[i];
			}
			v[n-1]=v[n-2];
			v[0]=v[1];
		}
		
	
		for(auto x:v)cout<<x<<" ";
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}