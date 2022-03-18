#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int n=5;
	int a[n][n];
	int x=0,y=0;
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin>>a[i][j];
	        if(a[i][j]==1){
	            x=i;
	            y=j;
	        }
	    }
	}
	x=abs(2-x);
	y=abs(2-y);
	cout<<x+y;
	return 0;
}