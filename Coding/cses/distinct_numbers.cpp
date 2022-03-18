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
    int n;
    cin>>n;
    set<ll> s;
    while(n--){
    	ll temp;
    	cin>>temp;
    	s.insert(temp);
    }
    cout<<s.size();
}
