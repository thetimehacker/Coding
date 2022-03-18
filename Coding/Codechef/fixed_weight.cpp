#include <bits/stdc++.h>
#define ll long long
using namespace std;
// bool printDivisors(ll x,ll n)
// {
//     // Note that this loop runs till square root
//     for (ll i=sqrt(n); i>=1; i--)
//     {
//         if (n%i == 0)
//         {
//             if(max(i,n/i)<=x)return true;
//             else return false;
//         }
//     }
// }
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		// if(printDivisors(n,x))cout<<"YES\n";
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(x%i==0){
				ll rem=x/i;
				if(rem>0 && rem<=(n-i+1)){
					cout<<"YES\n";
					flag=true;
					break;
				}
			}
		}
		if(!flag)cout<<"NO\n";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}