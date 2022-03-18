#include <iostream>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int store=n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<a[k-1] || a[i]==0){
			store=i;
			break;
		}
	}
	cout<<store;
	return 0;
}