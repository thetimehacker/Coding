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
    	
    	vector<ll> v;
        int count=0;
        for(auto x:s)if(x-48>0)count++;
        cout<<count<<endl;
    	for(int i=0;i<s.size();i++){
    		int num=s[i]-48;
    		if(num>0){
    			int result=num*pow(10,s.size()-1-i);
                v.push_back(result);
    			
    		}
    	}
        for(auto x:v)cout<<x<<" ";
    	cout<<endl;
    }

}
