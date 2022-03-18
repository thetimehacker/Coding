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
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> c;
    for(auto &x:s){
    	//convert to lower case
    	c.insert(tolower(x));
    }

    if(c.size()==26)cout<<"YES";
    else cout<<"NO";
}
