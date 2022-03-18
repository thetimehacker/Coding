#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    //Start from here
    int n;
    cin>>n;
   	vector<ll> v(n);
   	for(int i=0;i<n;i++)cin>>v[i];
   	sort(v.begin(), v.end(),greater<int>());
   	ll mul=v[0]*v[1];
   	cout<<mul;

}
