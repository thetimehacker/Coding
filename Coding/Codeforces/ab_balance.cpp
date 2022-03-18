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
    	int ab=0,ba=0;
    	int abfirst=-1,ablast=-1,bafirst=-1,balast=-1;
    	for(int i=0;i<s.size()-1;i++){
    		if(s[i]=='a'&&s[i+1]=='b'){
    			ab++;
    			if(abfirst==-1)abfirst=i;
    			else ablast=i;
    		}
    		else if(s[i]=='b'&&s[i+1]=='a'){
    			ba++;
    			if(bafirst==-1)bafirst=i;
    			else balast=i;
    		}
    	}

    	//find which one is greater

    	if(ab>ba){
    		if(abfirst!=-1 && ablast!=-1){
    			if((abfirst)<(s.size()-1-ablast-1)){
    				//we will change all the first elements to b
    				for(int i=0;i<=abfirst;i++)s[i]='b';
    			}
    			else {
    				for(int i=ablast+1;i<s.size();i++)s[i]='a';
    			}   			

    		}else{
    			//only abfirst is present
    			if((abfirst)<(s.size()-1-abfirst-1)){
    				//we will change all the first elements to b
    				for(int i=0;i<=abfirst;i++)s[i]='b';
    			}
    			else {
    				for(int i=abfirst+1;i<s.size();i++)s[i]='a';
    			}
    		}
    	}else if(ba<ab){
    		if(bafirst!=-1 && balast!=-1){
    			if((s.size()-1-bafirst)<(s.size()-1-balast-1)){
    				//we will change all the first elements to b
    				for(int i=0;i<=bafirst;i++)s[i]='a';
    			}
    			else {
    				for(int i=balast+1;i<s.size();i++)s[i]='b';
    			}   			

    		}else{
    			//only abfirst is present
    			if((s.size()-1-bafirst)<(s.size()-1-bafirst-1)){
    				//we will change all the first elements to b
    				for(int i=0;i<=abfirst;i++)s[i]='a';
    			}
    			else {
    				for(int i=bafirst+1;i<s.size();i++)s[i]='b';
    			}
    		}
    	}

    	cout<<s<<"\n";

    }

}
