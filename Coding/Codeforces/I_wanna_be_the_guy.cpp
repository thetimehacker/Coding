#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<2;i++){
	    int k;
	    cin>>k;
	    for(int j=0;j<k;j++){
	        int temp;
	        cin>>temp;
	        a[temp]=1;
	    }
	}
	
	//checking
	bool flag=true;
	for(int i=1;i<n+1;i++){
	    if(a[i]!=1){
	        flag=false;
	        break;
	    }
	}
	if(flag)cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
}
