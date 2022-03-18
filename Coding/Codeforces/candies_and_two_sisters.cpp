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
    	if(n>2)cout<<n-1-int(n/2);
    	else cout<<0;
    	cout<<endl;
    }

}
