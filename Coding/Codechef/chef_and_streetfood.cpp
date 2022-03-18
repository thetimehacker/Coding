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
    	int n;
    	cin>>n;
    	ll m=0;
    	for(int i=0;i<n;i++){
    		int s,v,p;
    		cin>>s>>v>>p;
    		ll profit=v*(p/(s+1));
    		m=max(m,profit);
    	}
    	cout<<m<<endl;
    }

}
