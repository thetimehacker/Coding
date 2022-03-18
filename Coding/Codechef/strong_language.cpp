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
    	int n,k;
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	int count=0;
    	bool flag=false;
    	bool result=false;
    	for(int i=0;i<n;i++){
    		if(s[i]=='*'){
    			if(!flag)flag=true;
    			count++;
    			if(count==k){
    				result=true;
    				break;
    			}
    		}
    		else{
    			//if it finds another character
    			if(flag)flag=false;
    			count=0; //starting the count from 0;
    		}
    		//cout<<"count "<<count<<endl;
    	}
    	if(result)cout<<"YES";
    	else cout<<"NO";
    	cout<<endl;
    }
}
