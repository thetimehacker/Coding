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
    	for(int i=0;i<s.size();i++){
    		int num=s[i]-48;
    		if(num>0){
    			cout<<"The number is "<<num<<" and "<<pow(10,s.size()-1-i)<<endl;
    			v.push_back(num*pow(10,s.size()-1-i));
    		}
    	}

    	cout<<v.size()<<endl;
    	for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    	cout<<endl;
    }

}
