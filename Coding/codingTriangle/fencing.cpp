#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int ans=k*4;
		vector<vector<int>> v(n,vector<int> (m,0));
		
		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			v[x-1][y-1]=1;
		}
		
		// for(auto x:v){
		// 	for(auto y:x){
		// 		cout<<y<<" ";
		// 	}
		// 	cout<<endl;
		// }
		
		// start traversing the vector
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(v[i][j]==1){
					
					if(i==n-1 && j==m-1){}
					else if(i==n-1){
						if(v[i][j+1]==1)ans-=2;
					}
					else if(j==m-1)
					{
						if(v[i+1][j]==1)ans-=2;
					}
					else{
						if(v[i][j+1]==1)ans-=2;
						if(v[i+1][j]==1)ans-=2;
					}
					
				}
			}
		}
		
		cout<<ans<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}