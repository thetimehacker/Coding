#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int row,seat;
		cin>>row>>seat;
		int total;

		if(row%2==0)total=row/2;
		else total=row/2+1;

		if(seat%2==0)total*=(seat/2);
		else total*=(seat/2+1);
		cout<<total<<endl;
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

