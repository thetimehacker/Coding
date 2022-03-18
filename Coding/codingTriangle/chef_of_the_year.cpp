#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		//Start solution from here
		int n,email;
		cin>>n>>email;
		map<string,string> pc;
		map<string,int> country;
		map<string,int> participant;
		for(int i=0;i<n;i++){
			string p,c;
			cin>>p>>c;
			pc[p]=c;
		}

		for(int i=0;i<email;i++){
			string temp;
			cin>>temp;
			participant[temp]++;
			country[pc[temp]]++;
		}


		// for(auto [x,y]:country){
		// 	cout<<x<<" "<<y<<endl;
		// }
		// for(auto [x,y]:participant){
		// 	cout<<x<<" "<<y<<endl;
		// }
		int maxcountry=0;
		string maxc;
		for(auto x:country){
			if(x.second>maxcountry){
				maxcountry=x.second;
				maxc=x.first;
			}
		}
		cout<<maxc<<endl;

		int maxparticipant=0;
		string maxp;
		for(auto x:participant){
			if(x.second>maxparticipant){
				maxparticipant=x.second;
				maxp=x.first;
			}
		}
		cout<<maxp<<endl;


	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}