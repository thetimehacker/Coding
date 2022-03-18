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
    	//find the min character in the string
    	char small='|';//taking the max char
    	int pos=-1;
    	//to capture the location of the min char aswell
    	for(int i=0;i<s.size();i++){
    		if(s[i]<=small){
    			small=s[i];
    			pos=i;
    		}
    	}

    	bool order=true;
    	for(int i=1;i<=pos+1;i++){
    		if(s[i]<s[i-1]){
    			order=false;
    			break;
    		}
    	}
    	if(order){
    		cout<<s;
    	}
    	else{
	    	//now take a vector and store big elements in it
	    	vector<char> bade;
	    	vector<char> chote;
	    	for(int i=0;i<=pos;i++){
	    		if(s[i]>small)bade.push_back(s[i]);
	    		else chote.push_back(s[i]);
	    	}

	    	
	    		if(s[pos+1]<bade[bade.size()-1]){
	    			//print the chote and bade
		    		if(!chote.empty())for(int i=0;i<chote.size();i++)cout<<chote[i];		    	
	    			//append the left elements at the end of chote
	    			for(int i=pos+1;i<s.size();i++){
	    				cout<<s[i];
	    			}
	    			if(!bade.empty())for(int i=0;i<bade.size();i++)cout<<bade[i];

	    		}
	    		else {
	    			//print the chote and bade
			    	if(!chote.empty())for(int i=0;i<chote.size();i++)cout<<chote[i];
			    	if(!bade.empty())for(int i=0;i<bade.size();i++)cout<<bade[i];
	    			//append at the end of bade
	    			for(int i=pos+1;i<s.size();i++){
	    				cout<<s[i];
	    			}
	    		}
	    		    	
    	}
    	cout<<endl;

    }

}
