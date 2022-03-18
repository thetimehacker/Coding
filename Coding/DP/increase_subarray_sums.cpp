#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n);
		for(auto &x:v)cin>>x;
		
		
		vector<int>s;
		for(int i=1;i<=n;i++){
			for(int j=0;j<n-i+1;j++){
				int sum=0;
				for(int k=j;k<j+i;k++){
					sum+=v[k];
				}
				sum=sum+(i)*k;
				s.push_back(sum);
			}
		}
		
		for(auto x:s)cout<<x<<" ";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}