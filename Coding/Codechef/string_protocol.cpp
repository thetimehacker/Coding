#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<n;i++){
			if(s[i]==s[i+1]){
				count++;
				i++;
			}
			else count++;
		}
		cout<<count;
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}