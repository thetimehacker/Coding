#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string temp;
		cin>>temp;
		string ns="";
		cout<<"Encrypted code : ";
		for(auto x:s)ns+=x+temp;
		for(auto x:ns)cout<<x;
		cout<<endl;
		
		ns+=temp;
		cout<<"Decrypt code : ";
		for(int i=0;i<ns.size();i++){
			if(ns.substr(i,temp.size()+i-1)!=temp)cout<<ns[i];
			else i+=2;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}