#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string temp;
		cin>>temp;
		if(temp.size()>10){
			cout<<temp[0]<<temp.size()-2<<temp[temp.size()-1]<<endl;
		}
		else cout<<temp<<endl;
	}
	return 0;
}