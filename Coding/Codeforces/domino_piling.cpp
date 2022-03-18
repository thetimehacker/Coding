#include <iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	if(n*m<2)cout<<0;
	else{
		cout<<(n*m)/2;
	}
	return 0;
}