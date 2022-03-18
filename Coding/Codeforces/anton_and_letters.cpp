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
    getline(cin,s);
    set <char> uni;
    for(int i=0;i<s.size();i++){
    	if(isalpha(s[i]))uni.insert(s[i]);
    }
    cout<<uni.size();
}
