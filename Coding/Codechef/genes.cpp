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
    char a,b;
    cin>>a>>b;
    if(a=='R'||b=='R')cout<<'R';
    else if(a=='B'||b=='B')cout<<'B';
    else cout<<'G';
}
