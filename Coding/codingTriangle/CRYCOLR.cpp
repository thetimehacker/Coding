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
		for(int i=1;i<=4;i++)cin>>a[i]>>b[i]>>c[i];
		int result=max(max(min(a[1],a[2]),min(b[1],b[2])),min(c[1],c[2]))+
				max(max(min(a[1]+a[2],a[3]),min(b[1]+b[2],b[3])),min(c[1]+c[2],c[3]));
		cout<<result<<endl;
					
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

