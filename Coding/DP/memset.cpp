#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//lets create an array and try to user memset
		int n,k; // n is the length of the vector
		// k is the length of the memset
		cin>>n>>k;
		int v[n];
		cout<<"\nBefore using memset : ";
		for(auto x : v)cout<<x<<" ";
		
		//now use memset
		memset(v,-1,sizeof(v));
		for(auto x: v)cout<<x<<" ";
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}