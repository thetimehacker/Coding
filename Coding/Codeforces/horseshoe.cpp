#include <iostream>
using namespace std;

int main() {
	int n=4;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int count=0;
	for(int i=0;i<n-1;i++){
	    if(a[i]==-1)continue;
	    for(int j=i+1;j<n;j++){
	        if(a[i]==a[j]){
	            count++;
	            a[j]=-1;
	        }
	    }
	}
	cout<<count;
}
