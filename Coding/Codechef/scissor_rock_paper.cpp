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
    	string s;
    	cin>>n>>s;

    	vector<char>v(n);
    	v[s.size()-1]=s[s.size()-1];

    	bool br=false,bp=false,bs=false;
    	char rv=' ',pv=' ',sv=' ';

    	//for last one
    	if(s[s.size()-1]=='R'){
    		rv='R';
    		br=true;
    	}
    	else if(s[s.size()-1]=='S'){
    		sv='S';
    		bs=true;
    	}else {
    		pv='P';
    		bp=true;
    	}

    	//start traversing the string from end
    	for(int i=s.size()-2;i>=0;i--){
    		if(s[i]=='S'){
    			if(s[i+1]=='P'){
    				//scissor can cut paper so we can not user paper value
    				if(br){
    					//sv will contain the value of R
    					v[i]=rv;
    					/*if(br=='P'){
    						//then we will store P
    						v[i]='P';
    					}else{
    						//we will store R
    						v[i]='R';
    					}*/
    				}else if(bs){
    					//we will store the value of previous
    					v[i]=sv;
    				}else{
    					//we will store the value of 'S'
    					v[i]='S';
    				} 
    			}
    			else{
    				//then s cannot break R so it will contail value of R
    				v[i]=v[i+1];
    			}
    			sv=v[i]; //update the value of sv
    			bs=true;
    			
    		}else if(s[i]=='R'){

    			if(s[i+1]=='S'){
    				//scissor can cut paper so we can not user paper value
    				if(bp){
    					//sv will contain the value of R
    					v[i]=pv;
    					/*if(br=='P'){
    						//then we will store P
    						v[i]='P';
    					}else{
    						//we will store R
    						v[i]='R';
    					}*/
    				}else if(br){
    					//we will store the value of previous
    					v[i]=rv;
    				}else{
    					//we will store the value of 'S'
    					v[i]='R';
    				} 
    			}
    			else{
    				//then r cannot break P so it will contail value of P
    				v[i]=v[i+1];
    			}
    			rv=v[i]; //update the value of sv
    			br=true;
    		}else{
    			//it will be paper
    			if(s[i+1]=='R'){
    				//scissor can cut paper so we can not user paper value
    				if(bs){
    					//sv will contain the value of R
    					v[i]=sv;
    					/*if(br=='P'){
    						//then we will store P
    						v[i]='P';
    					}else{
    						//we will store R
    						v[i]='R';
    					}*/
    				}else if(bp){
    					//we will store the value of previous
    					v[i]=pv;
    				}else{
    					//we will store the value of 'S'
    					v[i]='P';
    				} 
    			}
    			else{
    				//then s cannot break R so it will contain value of R
    				v[i]=v[i+1];
    			}
    			pv=v[i]; //update the value of sv
    			bp=true;
    		}
    	}

    	for(auto x:v){
    		cout<<x;
    	}
    	cout<<"\n";
    }

}
