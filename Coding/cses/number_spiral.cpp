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
    ll t;
    cin>>t;
    while(t--){
    	ll x,y;
    	cin>>x>>y;
    	if(x==1 && y==1)cout<<1<<"\n";
    	else
    	{
    	    ll m=pow(max(x,y),2);
    	    
    	    if(m%2==0){
    	    	//even - left
    	    	//if it is odd it will be located at top 
    	    	ll a=max(x,y), b=1; //location of the top element
    	    	ll count=abs(x-a)+abs(y-b);
    	    	cout<<m-count<<"\n";
    	    }else{
    	    	//odd - top
    	    	//if it is odd it will be located at top 
    	    	ll a=1, b=max(x,y); //location of the top element
    	    	ll count=abs(x-a)+abs(y-b);
    	    	cout<<m-count<<"\n";
    	    }
    	}
    }
}
