#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		//Start solution from here
		int n,m,k;
	    cin>>n>>m>>k;
	    vector <ll> a,b;
	    for(int i=0;i<n;i++){
	    	int temp;
	    	cin>>temp;
	    	a.push_back(temp);
	    }
	    for(int i=0;i<m;i++){
	    	int temp;
	    	cin>>temp;
	    	b.push_back(temp);
	    }
	 
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	 
	    int count=0;
	 
		int l=0;
	    for(int i=0,j=0;i<m,j<n;){
	    		if(abs(b[i]-a[j])<=k){
	    			count++;
	    			i++;
	    			j++;
	    		}
	    		else j++;
	    }
 
    	cout<<count;
	}
}

int main() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    //Start from here
    
    sol();

}

