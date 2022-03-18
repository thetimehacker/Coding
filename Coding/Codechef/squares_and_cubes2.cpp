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
        int count=(int)sqrt(n);
    	set<ll> s;
    	for(ll i=2;i<=sqrt(n);i++){
            s.insert(pow(i,2));
    		if(pow(i,3)<=n){
    			s.insert(pow(i,3));
    			//cout<<"pow("<<i<<",3) = "<<pow(i,2)<<endl;
    		}
    	}
    	cout<<s.size()+1;
    	cout<<endl;
    }
}
