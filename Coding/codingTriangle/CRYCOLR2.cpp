#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		int a[4],b[4],c[4];
		for(int i=0;i<3;i++)cin>>a[i]>>b[i]>>c[i];
		int sum=0;
		sum+=max(max(a[0],a[1]),a[2]);
		sum+=max(max(b[0],b[1]),b[2]);
		sum+=max(max(c[0],c[1]),c[2]);
		cout<<sum/2;
		
					
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

