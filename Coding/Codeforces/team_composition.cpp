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
    	ll a,b;
    	cin>>a>>b;

    	ll div=(a+b)/4;

    	if(div==0){
    		cout<<0;
    	}
    	else{
    		if(a>=div && b>=div){
    			cout<<div;
    		}
    		else if(a<div)cout<<a;
    		else cout<<b;
    	}
    	cout<<endl;
    }

}
