#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    //Start from here
    int t;
    cin>>t;
    while(t--){
    	int k,l,a,b,x,y;
    	cin>>k>>l>>a>>b>>x>>y;

    	if((k==1 || k==2)&&(l==1 || l==2)){
    		if(((abs(k-a)<=1)&&(abs(l-b)<=1))||((abs(k-a)<=1)&&(abs(l-b)<=1))){
    			cout<<"NO\n";
    		}
    		else{
    			if(k==1){
    				if(a==1||a==2){
    					if(a==2 && y==b && x>a)cout<<"NO\n";
    					else{
	    					if(l==1){
		    					if(y!=1 && y!=2)cout<<"YES\n";
		    					else cout<<"NO\n";
	    					}
	    					else if(l==8){
	    						if(y!=7 && y!=8)cout<<"YES\n";
	    						else cout<<"NO\n";
	    					}
	    				}
    				}
    				else if(x==1||x==2){
    					if(x==2 && b==y && a>x)cout<<"NO\n";
    					else{
	    					if(l==1){
	    						if(b!=1 && b!=2)cout<<"YES\n";
	    						else cout<<"NO\n";
	    					}
	    					else if(l==8){
	    						if(b!=7 && b!=8)cout<<"YES\n";
	    						else cout<<"NO\n";
	    					}
	    				}
    				}
    				else if(b==1){
    					if(l==1){
    						if(x!=1 && x!=2)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else if(l==8){
    						if(x!=7 && x!=8)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    				}
    				else if(y==1){
    					if(l==1){
    						if(a!=1 && a!=2)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else if(l==8){
    						if(a!=7 && a!=8)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    				}
    			}
    		}
    	}
    	else cout<<"NO\n";
    }

}
