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
    	if(n>2){
    		ll p=pow(2,(int)log2(n));
    		cout<<"p :"<<p<<endl;
    		if(n==p)
    			{
    				cout<<pow(2,((int)log2(n))+1)-1;
    			}
    		else cout<<pow(2,((int)log2(n))+1);
    	}
    	else cout<<n;
    	cout<<endl;
    }


}
