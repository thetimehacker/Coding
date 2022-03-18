#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main() {
    //sort and then use binary search 
    call();
    ll n;
    cin>>n;
    vector <ll> v;
    for(int i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        v.PB(temp);
    }
    //sort
    sort(v.begin(),v.end());
    int k=1;
    bool flag=false;
    for(auto x:v){
        if(x!=k){
            cout<<k;
            flag=true;
            break;
        }
        k++;
    }
    if(!flag)cout<<k;
    
}
