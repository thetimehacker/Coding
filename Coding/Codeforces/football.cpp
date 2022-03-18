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
    string s;
    cin>>s;
    int count=1;
    bool result=false;
    for(int i=1;i<s.size();i++){
    	if(s[i]==s[i-1]){
    		count++;
    		if(count>=7){
	    		result=true;
	    		break;
	    	}
	    }
    	else {
    		count=1;
    	}
    	
    }
    if(result)cout<<"YES";
    else cout<<"NO";
    cout<<endl;

}
