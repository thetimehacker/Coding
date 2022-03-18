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
    	string s;
    	int m=max(h,v);
    	int count=0;
    	char start,end;
    	if(h==v){
    		//start from any number
    		count=2*h;
    		start='0';
    		//end will we reverse
    		end='1';
    	}
    	else{
    		if(h>v){
    			count=h+v;
    			start='0';
    			end='0';
    		}
    		else {
    			count=h+v;
    			start='1';
    			end='1';
    		}
    	}

    	s+=start;
    	while(true){
    		if(h<1 && v<1)break;
    		if(start=='0' && h>=1){
    			s+='1';
    			h--;
    			start='1';
    		}else if(start=='0' && h==0){
    			s+="11";
    			start='1';
    		}
    		else if(start=='1' && v>=1){
    			s+='0';
    			v--;
    			start='0';
    		}else if(start=='1' && v==0){
    			s+="00";
    			start='1';
    		}
    	}
    	
    	s+=end;
    	cout<<s.size()<<"\n";
    	cout<<s<<"\n";
    }

}
