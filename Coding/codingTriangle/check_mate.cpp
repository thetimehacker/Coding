#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int xk,yk,x1,x2,y1,y2;
		cin>>xk>>yk>>x1>>y1>>x2>>y2;
		if((xk==1||xk==9)&&(yk==1||yk==8)){

			if(xk==1 && yk==1){
				if((y1==1||y2==1)){
					result=true;
				}
			}
			
		}
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

