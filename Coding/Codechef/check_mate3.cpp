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
    		if(((abs(k-a)<=1)&&(abs(l-b)<=1))||((abs(k-x)<=1)&&(abs(l-y)<=1))){
    			cout<<"NO\n";
    		}
    		else{
    			if(k==1 && l==1){
    				if(a==1 && y>2)cout<<"YES\n";
    				else if(a==2 && y>2){
    					if(y==b){
    						if(x<a)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(b==1 && x>2)cout<<"YES\n";
    				else if(b==2 && x>2){
    					if(x==a){
    						if(y<b)cout<<"YES\n";
    						else cout<<"\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(x==1 && b>2)cout<<"YES\n";
    				else if(x==2 && b>2){
    					if(b==y){
    						if(a<x)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(y==1 && a>2)cout<<"YES\n";
    				else if(y==2 && a>2){
    					if(a==x){
    						if(b<y)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else cout<<"NO\n";
    			}
    			else if(k==1 && l==8){
    				if(a==1 && y<7)cout<<"YES\n";
    				else if(a==2 && y<7){
    					if(y==b){
    						if(x<a)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(b==8 && x>2)cout<<"YES\n";
    				else if(b==7 && x>2){
    					if(x==a){
    						if(y>b)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(x==1 && b<7)cout<<"YES\n";
    				else if(x==2 && b<7){
    					if(b==y){
    						if(a<x)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(y==8 && a>2)cout<<"YES\n";
    				else if(y==7 && a>2){
    					if(a==x){
    						if(b<y)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else cout<<"NO\n";
    			}
    			else if(k==8 && l==1){
    				if(a==8 && y>2)cout<<"YES\n";
    				else if(a==7 && y>2){
    					if(y==b){
    						if(x>a)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(b==1 && x<7)cout<<"YES\n";
    				else if(b==2 && x<7){
    					if(x==a){
    						if(y<b)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(x==8 && b>2)cout<<"YES\n";
    				else if(a==7 && b>2){
    					if(b==y){
    						if(a>x)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(y==1 && a<7)cout<<"YES\n";
    				else if(y==2 && a<7){
    					if(a==x){
    						if(b<y)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else cout<<"NO\n";
    			}
    			else if(k==8 && l==8){
    				if(a==8 && y<7)cout<<"YES\n";
    				else if(a==7 && y<7){
    					if(y==b){
    						if(x>a)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(b==8 && x<7)cout<<"YES\n";
    				else if(b==7 && x<7){
    					if(x==a){
    						if(y>b)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(x==8 && b<7)cout<<"YES\n";
    				else if(x==7 && b<7){
    					if(b==y){
    						if(a>x)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else if(y==8 && a<7)cout<<"YES\n";
    				else if(y==7 && a<7){
    					if(a==x){
    						if(b>y)cout<<"YES\n";
    						else cout<<"NO\n";
    					}
    					else cout<<"YES\n";
    				}
    				else cout<<"NO\n";
    			}
    		}

    	}
    	else cout<<"NO\n";
    }

}
