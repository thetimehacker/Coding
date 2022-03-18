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
    	vector <int> v;
    	int i;
    	for(i=0;i<s.size();i++){
    		if(s[i]!='0'){
    			v.push_back((s[i]-48)*pow(10,s.size()-1-i));
    		}
    	}
    	cout<<v.size()<<endl;
    	for(auto &x:v)cout<<x<<" ";
    	cout<<endl;

    }
}
