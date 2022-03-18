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
    string s;
    cin>>s;
    int n=s.size();
    int four=n/2,seven=n/2;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	if(i==0){
    		if(s[i]-48>4){
    			v[i]=7;
    		}
    		else v[i]=4;
    	}
    	else{
    		if(s[i]-48>7){
    			//swap the place of previous
    			v[i]=v[i-7];
    			v[i-1]=7;
    		}
    		else if(s[i]-48>4){
    			v[i]=7;
    		}
    		else{
    			v[i]=4;
    		}
    	}
    }

    for(auto x:v)cout<<x;

}
