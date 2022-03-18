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
    	int m=max(h,v);
    	int n=2*m-1;
    	int start,end;
    	if(h==v){
    		start=0;
    		end=1;
    		n=2*m;
    	}else if(h>v){
    		start=0;
    		end=0;
    	}
    	else {
	    	start=1;// if v is greater than h
	    	end=1;
   		}

    	string s;
    	if(start)s+='1';
    	else s+='0';

    	for(int i=0;i<n;i++){
    		if(start==0 && h>0){
    			s+='1';
    			h--;
    			start=1;
    		}
    		else if(start==0 && h<1){
    			s+="11";
    			start=1;
    		}
    		else if(start==1 && v>0){
    			s+='0';
    			v--;
    			start=0;
    		}
    		else if(start==1 && v<1){
    			s+="00";
    			start=0;
    		}
    	}

    	if(end)s+='1';
    	else s+='0';

    	cout<<s.size()<<"\n";
    	cout<<s<<"\n";
    }
}
