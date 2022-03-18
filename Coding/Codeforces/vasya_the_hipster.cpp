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
    int n,m;
    cin>>n>>m;
    int diff=min(n,m);
    cout<<diff<<" ";
    int same=max(n,m);
    cout<<(same-diff)/2;

}
