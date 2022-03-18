#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a;
		b=a;
		reverse(b.begin(), b.end());
		
		int count=0;
		for(int i=0,j=0;i<a.size();i++){
			if(a[i]==b[j])j++;
			else{
				count++;
			}
		}
		cout<<count<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}