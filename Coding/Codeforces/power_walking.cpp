#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> s;
		int m=n;
		while(m--){
			int temp;
			cin>>temp;
			s.insert(temp);
		}
		
		for(int i=1;i<=n;i++){
			if(i<=s.size())cout<<s.size()<<" ";
			else cout<<i<<" ";
		}
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}