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
    vector<int> a(n);

    for(int i=0;i<m;i++){
    	int p,q;
    	cin>>p>>q;
    	a[p]++;
    	a[q+1]--;
    }

    //output
    for(int i=0;i<n;i++){
    	if(i!=0)a[i]+=a[i-1];
    	cout<<a[i]<<" ";
    }

}
