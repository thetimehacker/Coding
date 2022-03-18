#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for( auto &x : v){
			cin>>x;
		}
		string s;
		cin>>s;
		
		//check if sorted
		int vi;
		int index;
		bool sorted=true;
		for(int i=1;i<n;i++){
			if(v[i]<v[i-1]){
				vi=v[i-1];
				index=i-1;
				sorted=false;
				break;
			}
		}
		
		if(sorted)cout<<0;
		else{
			//if all the polarities are same
			//-1
			bool same =true;
			for(int i=1;i<n;i++){
				if(s[i]!=s[i-1]){
					same=false;
					break;
				}
			}
			if(same)cout<<-1;
			else{
				if(s[0]!=s[n-1])cout<<1;
				else{
					int indexj=-1;
					for(int i=index+1;i<n;i++){
						if(v[i]<vi){
							indexj=i;
						}
					}
					if(indexj==-1){
						indexj=n-1;
					}
					bool yes=true;
					for(int i=0;i<=index;i++){
						if(s[i]!=s[indexj]){
							yes=false;
							cout<<1;
							break;
						}
					}
					if     (yes)cout<<2;
				}
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