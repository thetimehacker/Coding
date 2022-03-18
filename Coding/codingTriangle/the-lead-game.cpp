#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		int a=0,b=0;
		int max=0,lead=0;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			a+=temp;
			cin>>temp;
			b+=temp;

			int m=(a>b)?(a-b):(b-a);
			if(m>max){
				max=m;
				if(a>b)lead=1;
				else lead=2;
			}
		}
		cout<<lead<<" "<<max<<endl;	
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

