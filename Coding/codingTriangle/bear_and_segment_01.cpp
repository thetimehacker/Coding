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
		bool flag=false;
		for(int i=0;i<s.size(;)i++){
			if(s[i]=='1' && flag==false)
			{
				count++;
				flag=true;
			}
			else if(s[i]=='0' && flag==true)flag=false;
		}

		if(count!=1)cout<<"NO";
		else cout<<"YES";
		cout<<endl;
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

