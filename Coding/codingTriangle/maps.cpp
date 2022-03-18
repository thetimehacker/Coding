#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		//Start solution from here
		map<int,int> m;
		int n,q;
		cin>>n>>q;

		for(int i=1;i<=n;i++){
			int temp;
			cin>>temp;
			m[temp]=i;
		}

		for(int i=0;i<q;i++){
			int temp;
			cin>>temp;
			cout<<"m["<<temp<<"] = "<<m[temp]<<endl;
		}

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

