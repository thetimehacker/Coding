#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		string s;
		int a,b;
		cin>>s>>a>>b;

		int sum=a+b;

		int pa,pb;

		for(int i=0;i<s.size();i++){
			if(s[i]=='A')pa=i;
			else if(s[i]=='B')pb=i;
		}

		int distance=pb-pa;

		cout<<((distance%sum!=0)?"safe":"unsafe")<<endl;
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

