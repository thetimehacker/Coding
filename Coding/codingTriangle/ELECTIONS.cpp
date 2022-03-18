#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int a,b,c;
		cin>>a>>b>>c;
		if(a>50)cout<<"A";
		else if(b>50)cout<<"B";
		else if(c>50)cout<<"C";
		else cout<<"NOTA";
		cout<<endl;

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

