#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		cout<<"log 2 ("<<n<<") = "<<log2(n)<<endl;
		cout<<"pow (2,"<<(int)log2(n)<<") = "<<pow(2,(int)log2(n))<<endl;
		if(n==pow(2,(int)log2(n)))cout<<"equal";
		else cout<<"unequal";
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

