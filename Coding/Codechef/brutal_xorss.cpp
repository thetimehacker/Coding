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
    
    const unsigned int M = 1000000007;

    while(t--){
    	ll n;
    	cin>>n;
    	if(n>2){
    		ll l=(int)log2(n);
    		ll p=pow(2,(int)log2(n));
    		//cout<<"p :"<<p<<endl;
    		if(n==p)
    			{
    				//cout<<pow(2,((int)log2(n))+1)-1;
    				ll m=1;
    				for(int i=1;i<=l+1;i++){
    					m=(m*2)%M;
    				}
    				cout<<m-1;
    			}
    		else {
    			//cout<<pow(2,((int)log2(n))+1);
    			ll m=1;
    				for(int i=1;i<=l+1;i++){
    					m=(m*2)%M;
    				}
    				cout<<m;
    		}
    	}
    	else cout<<n;
    	cout<<endl;
    }


}
