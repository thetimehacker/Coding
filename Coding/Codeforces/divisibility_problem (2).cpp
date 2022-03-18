#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int extra;
    	int a,b;
    	cin>>a>>b;
    	extra=a%b;
    	if(extra==0)cout<<0;
    	else cout<<b-extra<<endl;
	}
}
