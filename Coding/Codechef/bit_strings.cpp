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
    ll m = 1000000007;
    ll ans=1;
    while(n--){
    	ans=(2*ans)%m;
    }
    cout<<ans;
}
