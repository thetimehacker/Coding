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
    	vector<char> v;
        //taken last element as the smallest
    	char smallest=s[s.size()-1];
        //start traversing from last
    	for(int i=s.size()-2;i>=0;i--){
    		if(s[i]!='|'){
	    		if(s[i]<smallest)smallest=s[i];
	    		else if(s[i]>smallest){
	    			v.push_back(s[i]);
	    			s[i]='|';
	    		}
    		}
    	}
    	//cout<<endl;
    	//create a new string 

        //calculating the max element of the string
        char m;
        if(!v.empty()){
            m=v[0];
            for(auto &x:v){
                if(x>m)m=x;
            }
        }

    	string n;
    	bool flag=false;
    	for(int i=0;i<s.size();i++){
    		if(s[i]!='|'){
    			if(!v.empty()){
	    			if(!flag){
		    			if(s[i]>m){
		    				for(int i=v.size()-1;i>=0;i--)n+=v[i];
		    				flag=true;
		    			}
	    			}
	    		}
    			n+=s[i];
    		}
    	}

    	if(!flag){
    		for(int i=v.size()-1;i>=0;i--)n+=v[i];
    	}

    	cout<<n<<"\n";

    }
}
