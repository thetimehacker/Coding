#include <bits/stdc++.h>
using namespace std;
const int sz=(int)1e5+5;
int n;
int a[sz],b[sz],c[sz];

//memoization
int dp[sz][4];
int solve(int day,int prev){
	if(day==n)return 0;
	
	// if(dp[day][prev]!=-1)return dp[day][prev];
	int ans=0;
	if(prev==0){
		int swim=a[day]+solve(day+1,1);
		int bug=b[day]+solve(day+1,2);
		int hw=c[day]+solve(day+1,3);
		ans=max({swim,bug,hw});
	}
	else if(prev==1){
		int bug=b[day]+solve(day+1,2);
		int hw=c[day]+solve(day+1,3);	
		
		ans=max(bug,hw);
		
	}
	else if(prev==2){
		int swim=a[day]+solve(day+1,1);
		int hw=c[day]+solve(day+1,3);
		
		ans=max(swim,hw);
	}
	else{
		int swim=a[day]+solve(day+1,1);
		int bug=b[day]+solve(day+1,2);
		ans=max(swim,bug);
	}
	// return dp[day][prev]=ans;
	return ans;
}

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i]>>c[i];
		}
		memset(dp,-1, sizeof(dp));
		cout<<solve(0,0);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}