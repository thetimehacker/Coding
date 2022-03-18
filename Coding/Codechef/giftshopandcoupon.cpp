#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n);
		for(auto &x:v)cin>>x;
		sort(v.begin(),v.end(),greater<int>());
	
		bool one=false;
		ll sum=0;
		
		ll count=0;
		for(auto x:v){
			if(sum+x>k){
				if(one)break;
				if(sum+round(x/2)>k){
					break;
				}
				else{
					sum+=round(x/2);
					count++;
					one=true;
				}
			}
			else{
				sum+=x;
				count++;
			}
		}
		cout<<count<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}