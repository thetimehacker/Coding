#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		string s;
		cin>>s;
		int a=0,b=0;
		bool result=false;
		int lefta=n,leftb=n;
		for(int i=0;i<2*n;i++){
			if(s[i]=='1'){
				if(i%2==0)a++;
				else b++;
			}

			if(i%2==0){
				//a++;
				lefta--;
			}
			else {
				leftb--;
			}


			if((a>b+leftb)||(b>a+lefta)){
				result=true;
						cout<<i+1;
						break;
			}
		}
		if(!result)cout<<n*2;
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

