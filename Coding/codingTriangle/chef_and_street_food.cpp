#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		int max=0;
		while(n--){
			int s,p,v;
			cin>>s>>p>>v;	
			if(p/(s+1)*v>max)max=p/(s+1)*v;	
		}
		cout<<max<<endl;
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

