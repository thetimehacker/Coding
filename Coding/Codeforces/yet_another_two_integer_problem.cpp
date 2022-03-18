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
    	ll diff=abs(b-a);
    	ll quotient=diff/10;
    	if(quotient*10 == diff)cout<<quotient;
    	else cout<<quotient+1;
    	cout<<endl;
    }

}
