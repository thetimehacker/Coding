#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int grid[1005][1005];
int n,m;
int numberofways(int row,int col){
	if(row==n-1 && col==m-1)return dp[row][col]=1;
	if(grid[row][col]==0)return dp[row][col]=0;
	
	if(dp[row][col]!=-1)return dp[row][col];
	int ans=0;
	
	if(row<n-1)ans+=numberofways(row+1,col);
	if(col<m-1)ans+=numberofways(row,col+1);
	return dp[row][col]=ans;
	
}
void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)cin>>grid[i][j];
		}
		memset(dp,-1,sizeof(dp));
		cout<<numberofways(0,0);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}