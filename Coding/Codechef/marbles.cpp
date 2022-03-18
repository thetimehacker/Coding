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
    	string c,d;
    	cin>>c>>d;
    	int min=-1;
    	
    	for(char i='a';i<='z';i++){
    		string a=c,b=d;
    		int countdiff=0;
    		for(int j=0;j<n;j++){
    			if(a[j]=='?'){
    				a[j]=i;
    			}
    			if(b[j]=='?'){
    				b[j]=i;
    			}
    			if(a[j]!=b[j]){
	    			if(((a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')&&
	    			    				(b[j]!='a'&&b[j]!='e'&&b[j]!='i'&&b[j]!='o'&&b[j]!='u'))||
	    				((b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u')&&
	    			    				(a[j]!='a'&&a[j]!='e'&&a[j]!='i'&&a[j]!='o'&&a[j]!='u'))){
	    				//both are different
	    				countdiff+=1;
	    			}
	    			else{
	    				//both are smae;
	    				countdiff+=2;
	    			}
    			}
    		}
    		if(min==-1){
    			min=countdiff;
    		}
    		else if(countdiff<min)min=countdiff;
    	}
    	cout<<min<<endl;

    }
}
