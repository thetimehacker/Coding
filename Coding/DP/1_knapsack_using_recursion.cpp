//to count the number of recursive calls
#include <bits/stdc++.h>
int t[100][1000];
using namespace std;
int knapsack(vector<int> v,vector<int> wt,int W, int n){
	if(n==0 || W==0)return 0;
	if(t[n][W]!=-1)return t[n][W];
	if(wt[n-1]<=W){
		//weight of last element
		//we can take it or not
		return t[n][W]=max(v[n-1]+knapsack(v,wt,W-wt[n-1],n-1),knapsack(v,wt,W,n-1));
		
	}
	else return t[n][W]=knapsack(v,wt,W,n-1); //we will only remove the item
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//number of elements
		int n;
		cin>>n;
		
		//geting item value and weight
		
		vector<int> v(n),wt(n);
		for(auto &x :v)cin>>x;
		for(auto &x : wt)cin>>x;
		int W;//capacity
		cin>>W;
			
		cout<<"The solution is : "<<knapsack(v,wt,W,n);
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //converting the array in -1
    memset(t,-1,sizeof(t));
    sol();

}