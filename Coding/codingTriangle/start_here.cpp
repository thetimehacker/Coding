#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n,m;
		cin>>n>>m;
		
		if(n<=m){
			if(m%n==0)cout<<"YES";
			else cout<<"NO";
		}
		else{
			if(n%m==0)cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
}

int main() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    //Start from here
    
    sol();

}

