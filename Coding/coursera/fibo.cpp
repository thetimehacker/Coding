#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void fibo (ll a,ll b, ll n,ll m){
	ll ans;
	if (m==n);
	else if(n==1)ans=1;
	else{
		ans=fibo(n-1)+fibo(n-2);
	} 
	cout<<ans<<" ";
}
int main() {
    call();
    //Start from here
    int n;
    cin>>n;
    fibo(0,1,n,1);

}
