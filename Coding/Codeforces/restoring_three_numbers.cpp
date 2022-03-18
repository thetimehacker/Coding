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
    vector<int> v(4);
    for(int i=0;i<4;i++)cin>>v[i];
    sort(v.begin(), v.end());
	cout<<v[3]-v[1]<<" "<<v[3]-v[2]<<" "<<v[3]-v[0];
}
