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
    	ll n;
    	cin>>n;
    	//ll count=1;
    	set<ll> s;
    	for(ll i=1;i<=sqrt(n);i++){
    		if(pow(i,2)<=n){
    			//cout<<"pow("<<i<<",2) = "<<pow(i,2)<<endl;
    			s.insert(pow(i,2));
    		}
    		else break;
    		if(pow(i,3)<=n){
    			s.insert(pow(i,3));
    			//cout<<"pow("<<i<<",3) = "<<pow(i,2)<<endl;
    		}
    		
    	}
    	cout<<s.size();
    	cout<<endl;
    }

}
