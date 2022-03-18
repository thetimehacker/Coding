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
    	int k1,k2,a,b,x,y;
    	cin>>k1>>k2>>a>>b>>x>>y;
    	if((k1==1 || k1==8) && (k2==1 || k2==8)){
    		if((abs(k1-a)<=1 && abs(k2-b)<=1)||(abs(k1-x)<=1 && abs(k2-y)<=1)){
    			cout<<"NO\n";
    		}else{
    			if(k1==1 && k2==1){
    				if(a==1){
    					if(y!=1 && y!=2)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(a==2){
    					if((y!=1 && y!=2 && y!=b)||(y==b && x==1))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(b==1){
	    				if(x!=1 && x!=2){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(b==2){
	    				if((x!=1 && x!=2 && x!=a)||(x==a && y==1))cout<<"YES\n";
    					else cout<<"NO\n";
	    			}
	    			else if(x==1){
    					if(b!=1 && b!=2)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(x==2){
    					if((b!=1 && b!=2 && b!=y)||(b==y && a==1))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(y==1){
	    				if(a!=1 && a!=2){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(y==2){
	    				if((a!=1 && a!=2 && a!=x)||(a==x && b==1))cout<<"YES\n";
    					else cout<<"NO\n";
	    			}else cout<<"NO\n";
    			}
    			else if(k1==1 && k2==8){
    				if(a==1){
    					if(y!=7 && y!=8)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(a==2){
    					if((y!=7 && y!=8 && y!=b)||(y==b && x==1))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(b==8){
	    				if(x!=1 && x!=2){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(b==7){
	    				if((x!=1 && x!=2 && x!=a)||(x==a && y==8)){
	    					cout<<"YES\n";
	    				}else cout<<"NO\n";
	    			}else if(x==1){
    					if(b!=7 && b!=8)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(x==2){
    					if((b!=7 && b!=8 && b!=y)||(b==y && a==1))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(y==8){
	    				if(a!=1 && a!=2){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(y==7){
	    				if((a!=1 && a!=2 && a!=x)||(a==x && b==8)){
	    					cout<<"YES\n";
	    				}else cout<<"NO\n";
	    			}
	    			else cout<<"NO\n";
    			}
    			else if(k1==8 && k2==1){
    				if(a==8){
    					if(y!=1 && y!=2)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(a==7){
    					if((y!=1 && y!=2 && y!=b)||(y==b && x==8))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(b==1){
	    				if(x!=7 && x!=8){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(b==2){
	    				if((x!=7 && x!=8 && x!=a)||(x==a && y==1)){
	    					cout<<"YES\n";
	    				}else cout<<"NO\n";
	    			}
	    			else if(x==8){
    					if(b!=1 && b!=2)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(x==7){
    					if((b!=1 && b!=2 && b!=y)||(b==y && a==8))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(y==1){
	    				if(a!=7 && a!=8){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(y==2){
	    				if((a!=7 && a!=8 && a!=x)||(a==x && b==1)){
	    					cout<<"YES\n";
	    				}else cout<<"NO\n";
	    			}else cout<<"NO\n";
    			}
    			else if(k1==8 && k2==8){
    				if(a==8){
    					if(y!=8 && y!=7)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(a==7){
    					if((y!=8 && y!=7 && y!=b)||(y==b && x==8))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(b==8){
	    				if(x!=7 && x!=8){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(b==7){
	    				if((x!=7 && x!=8 && x!=a)||(x==a && y==8)){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
	    			}else if(x==8){
    					if(b!=8 && b!=7)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(x==7){
    					if((b!=8 && b!=7 && b!=y)||(b==y && a==8))cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(y==8){
	    				if(a!=7 && a!=8){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
    				}
	    			else if(y==7){
	    				if((a!=7 && a!=8 && a!=x)||(a==x && b==8)){
	    					cout<<"YES\n";
	    				}
    					else cout<<"NO\n";
	    			}else cout<<"NO\n";
    			}else cout<<"NO\n";

    		}
    	}else cout<<"NO\n";
    }

}





/*if((a==k1 && x!=k1)){
    				if((k1==1 && k2==1)){
    					if(y!=1 && y!=2)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if((k1==1 && k2==8)){
    					if(y!=7 && y!=8)cout<<"YES\n";
    					else cout<<"NO\n";
    				}
    				else if(k1==8 && k2==1){
    					if(y!=)
    				}
    			}else if((x==k1 && a!=k1)){

    			}
*/