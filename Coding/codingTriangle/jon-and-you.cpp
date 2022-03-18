#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		//Start solution from here
		int a,b,n;
		cin>>a>>b>>n;
		for(int i=1;i<=n;i++){
			bool r1=false,r2=false;
			if(i%a==0)r1=true;
			if(i%b==0)r2=true;
			if(r1 && r2){
				cout<<"BeautifulLie";
			}
			else if(r1)cout<<"Beautiful";
			else if(r2)cout<<"Lie";
			else cout<<i;
			cout<<endl;
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

