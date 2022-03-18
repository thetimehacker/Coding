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
		unordered_map<int,int> mex;
		for(int i=0;i<n;i++){
			int m=1;
			if(v[i]==m)mex[m-1]++;
			else mex[m]++;
		}
		
		int mx=0;
		for(auto x:mex){
			mx=max(x.second,mx);
		}
		
		cout<<mx<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}