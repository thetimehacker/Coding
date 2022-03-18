#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int n;
	cin>>n;
	int count=0;
	while(n--){
		string temp;
		cin>>temp;
		if(temp[0]=='+'||temp[1]=='+')
		count++;
		else if(temp[0]=='-'||temp[1]=='-') count--;
	}
	cout<<count;
	return 0;
}