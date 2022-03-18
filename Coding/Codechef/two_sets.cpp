#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    //call();
    //Start from here
    ll n;
    cin>>n;
    vector <ll> v1;
    vector <ll> v2;
    ll sum=(n*(n+1))/2;
    if(sum%2==0){
    	
    	ll half=sum/2;
    	for(ll i=n;i>=1;i--){
    		if(i<=half){
    			v1.push_back(i);
    			half-=i;
    		}
    		else v2.push_back(i);
    	}

		cout<<v1.size()<<endl;
		for(auto &x:v1)cout<<x<<" ";
		cout<<endl;
		cout<<v2.size()<<endl;
		for(auto &x:v2)cout<<x<<" ";
    	
    }else cout<<"NO\n";
}
