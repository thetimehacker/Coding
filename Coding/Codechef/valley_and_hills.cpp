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
    	int h,v;
    	cin>>h>>v;
    	int count=0;
    	int start;
    	if(h==v){
    		count=h+v+2;
    		start=0;
    	}

    	else if(h>v){
    		count=2*h+1;
    		start=0;
    	}
    	else{
    		count=2*v+1;
    		start=1;
    	} 

    	string s;
    	//print the elements
    	for(int i=0;i<count;i++){
    		if(start==1){
    			s+="1";
    			start=0;
    		}
    		else {
    			s+="0";
    			start=1;
    		}
    	}
    	cout<<count<<"\n";
    	cout<<s;
    	if(t!=0)cout<<"\n";

    }

}
