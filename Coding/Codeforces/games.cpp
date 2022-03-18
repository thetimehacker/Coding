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
    vector<int> a(n);
    vector <int> b(n);
    int i=0;
    while(n--){
    	cin>>a[i]>>b[i];
    	i++;
    }
    //sort
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int count=0;
    for(auto &x:a){
    	for(auto &y:b){
    		if(x==y)count++;
    		else if(y>x)break;
    	}
    }
    cout<<count;
}