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
    	int count=0;
    	if((s[s.size()-1]-48)%2==0){
    		//the number is already even
    		//nothing to do
    	}
    	else if((s[0]-48)%2==0){
    		//the number is not even but the first number is even 
    		//the first digit is even 
    		count=1;
    	}
    	else{
    		//the last digit and the first digit are not even 
    		//we will find an even number in the string between 1 to less than s.size()-1
    		bool foundeven=false;
    		for(int i=1;i<s.size()-1;i++){
    			if(s[i]%2==0){
    				foundeven=true;
    			}
    		}
    		if(foundeven)count=2;
    		else count=-1;
    	}
    	cout<<count<<endl;

    }

}
