#include <bits/stdc++.h>
using namespace std;
int g[3005][3005];
int r,c,k;
int dp[3005][3005][5];
int solve(int cr,int cc, int cnt){
	if(cr>r and cc>c)return 0;
	if(dp[cr][cc][cnt]!=-1)return dp[cr][cc][cnt];
	int leave = max(solve(cr+1,cc,0),solve(cr,cc+1,cnt));
	int pick=0;
	if(g[cr][cc]!=0 and cnt<3){
		pick=g[cr][cc] + max(solve(cr,cc+1,cnt+1),solve(cr+1, cc,0));
	}
	return dp[cr][cc][cnt]=max(leave,pick);
}
void sol(){
	cin>>r>>c>>k;
	memset(g,0,sizeof(g));
	for(int i=0;i<k;i++){
		int a,b,c;
		cin>>a>>b>>c;
		g[a][b]=c;
	}
	memset(dp,-1,sizeof(dp));
	cout<<solve(1,1,0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}