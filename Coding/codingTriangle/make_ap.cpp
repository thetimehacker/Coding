#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int a,b,c;
		cin>>a>>b>>c;

		bool result=false;
		
		if(b>=a||b>=c){
			if((abs(a-b)+abs(b-c))%a==0||(abs(a-b)+abs(b-c))%c==0)result=true;
		}
		else{
			if(abs(a-c)%b==0)result=true;
		}

		if(result)cout<<"YES";
		else cout<<"NO";
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

