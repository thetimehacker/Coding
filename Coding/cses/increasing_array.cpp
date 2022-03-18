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
    ll prev=-1;
    ll count=0;
    while(n--){
    	ll temp;
    	cin>>temp;
    	if(prev==-1){
    		prev=temp;
    	}
    	else {
    		if(temp-prev<0){
    			count+=abs(temp-prev);
    		}
    		else prev=temp;
    	}
    }
    cout<<count;
}
