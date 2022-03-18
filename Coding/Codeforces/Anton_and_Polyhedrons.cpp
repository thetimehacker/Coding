#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    //Start from here
    int n;
    cin>>n;
    int count=0;
    while(n--){
    	string s;
    	cin>>s;
    	if(s[0]=='T')count+=4;
    	else if(s[0]=='C')count+=6;
    	else if(s[0]=='O')count+=8;
    	else if(s[0]=='D')count+=12;
    	else if(s[0]=='I')count+=20;
    }
    cout<<count;
}
