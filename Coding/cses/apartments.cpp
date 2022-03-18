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
    int n,m,k;
    cin>>n>>m>>k;
    vector <ll> a,b;
    for(int i=0;i<n;i++){
    	int temp;
    	cin>>temp;
    	a.push_back(temp);
    }
    for(int i=0;i<m;i++){
    	int temp;
    	cin>>temp;
    	b.push_back(temp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int count=0;

int l=0;
    for(int i=0;i<m;i++){
    	for(int j=l;j<n;j++){
    		if(abs(b[i]-a[j])<=k){
    			count++;
    			a[j]=-1;
    			l=j+1;
    			break;
    		}
    	}
    }

    cout<<count;

}
