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
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int count=0;
    	bool flag=false;
    	if(n==1 && s[0]=='0')cout<<"JJ";
    	else{
	    	for(int i=1;i<n;i++){
	    		if(flag){
	    			if(s[i]==s[i-1]){
	    				flag=false;
	    			}
	    		}
	    		else{
		    		if(s[i]==s[i-1]){
		    			count++;
		    			flag=true;
	    			}
	    		}
	    	}

	    	if(count%2==0)cout<<"Uttu";
	    	else cout<<"JJ";
    	}
    	cout<<endl;
    }

}
