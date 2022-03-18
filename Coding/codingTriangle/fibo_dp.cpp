#include <bits/stdc++.h>
using namespace std;

int fibo(int n,int a,int b){
	if(n==1)return 0;
	else if(n==2)return 1;
	else return fibo(n-1,a,b)+fibo(n-2,a,b);
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){

		//Start solution from here

		int n;
		cin>>n;

		cout<<fibo(n,0,1)<<endl;

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

