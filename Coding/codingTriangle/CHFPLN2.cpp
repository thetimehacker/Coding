#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			if(m[temp]<temp-1)m[temp]++;
		}
		int total=0;
		for(auto [x,y]:m){
			total+=y;
		}
		
		cout<<total<<endl;	
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}