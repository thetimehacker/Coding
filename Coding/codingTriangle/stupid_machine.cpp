#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		vector<ll> v(n);
		ll sum=0;
		ll smallest=-1;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(smallest==-1)smallest=v[i];
			else{
				if(v[i]<smallest)smallest=v[i];
			}
			sum+=smallest;
		}
		cout<<sum<<endl;
	
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

