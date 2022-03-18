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
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	if(s.size()%2==0){
    		bool flag=true;
    		for(int i=0;i<s.size()/2;i++){
    			if(s[i]!=s[i+(s.size()/2)]){
    				flag=false;
    			}
    		}
    		if(flag)cout<<"YES";
    		else cout<<"NO";
    	}else cout<<"NO";
    	cout<<endl;
    }
}
