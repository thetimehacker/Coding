#include <bits/stdc++.h>
using namespace std;

int fibo(int a,int b,int n){
	if(n==0)return a;
	else if(n==1)return b;
	else if(n==2)return b^a;
	else{
		return (b,b^a,n-1);
	}
}

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int a,b,n;
		cin>>a>>b>>n;
		cout<<fibo(a,b,n)<<endl;

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

