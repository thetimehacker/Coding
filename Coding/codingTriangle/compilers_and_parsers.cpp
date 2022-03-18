#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		string s;
		cin>>s;
		int count=0;
		int maxx=0;
		if(s[0]=='<'&& s[s.size()-1]=='>'){
			for(auto x:s){
				if(x=='<'){
					maxx++;
				}
				else{
					if(maxx>0){
						maxx--;
						count+=2;
					}
				}
			}
			cout<<count<<endl;
		}
		else cout<<0<<endl;

	}
}

int main() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    //Start from here
    
    sol();

}

