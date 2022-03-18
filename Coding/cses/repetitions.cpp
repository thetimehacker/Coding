#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    //call();
    //Start from here
    string s;
    cin>>s;

    int max=1;
    int count=1;

    for(int i=0;i<s.size()-1;i++){
    	if(s[i]==s[i+1]){
    		count++;
    	}
    	else{
    		if(count>max)max=count;
    		count=1;
    	}
    	if(i==s.size()-2){
    		if(count>max)max=count;
    	}
    }
    cout<<max;

}
