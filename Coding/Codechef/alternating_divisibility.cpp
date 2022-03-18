#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m=n;
		unordered_map<int,int> v;
		int i=1;
		while((n/2)>0){
			if(v[i]<1 && v[i*2]<1){
				cout<<i<<" "<<i*2<<" ";
				v[i]++;v[i*2]++;
				n-=2;
				i++;
			}
			else i++;
		}
		if(m&1){
			while(1){
				if(v[i]<1 && v[i*2]<1){
					cout<<i;
					break;
				}
				else i++;
			}
		}
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}
