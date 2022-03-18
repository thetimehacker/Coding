#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,number,count=0;
	cin>>a>>b>>c>>d>>number;
	for(int i=1;i<=number;i++){
	    if(i%a==0 || i%b==0 || i%c==0 || i%d==0){
	        count++;
	    }
	}
	cout<<count;
}
