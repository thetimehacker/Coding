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
    	ll m=n-1;
    	ll count=0;
    	if(m<=1)cout<<1;
    	else{
	    	for (int i=1; i<=sqrt(m); i++)
		    {
		        if (m%i == 0)
		        {
		            // If divisors are equal, print only one
		            if (m/i == i)
		                count++;
		  
		            else // Otherwise print both
		                count+=2;
		        }
		    }
    		cout<<count;
    	}
    	cout<<endl;
    }

}
