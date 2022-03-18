#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int a,b,c,x,y,z;
		cin>>a>>b>>c>>x>>y>>z;
		if(a+b+c>x+y+z){
			cout<<"DRAGON";
		}
		else if(a+b+c<x+y+z)cout<<"SLOTH";
		else{
			if(a==x){
				if(b==y){
					if(c==z){
						cout<<"TIE";
					}
					else cout<<((c>z)?"DRAGON":"SLOTH");
				}
				else cout<<((b>y)?"DRAGON":"SLOTH");
			}
			else cout<<((a>x)?"DRAGON":"SLOTH");
		}
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

