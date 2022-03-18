#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		map<string,string> all;
		map<string,string> amount;

		map<string,int> first;
		map<string,int> second;
		int sum=0;
		for(int i=1;i<n;i++){
			string a,b,c;
			cin>>a>>b>>c;
			all[a]=b;
			amount[a]=c;
			first[a]++;
			second[b]++;

			stringstream ss(c);
			int temp;
			ss>>temp;
			sum+=temp;

		}

		string temp;
		for(auto [x,y]:first){
			if(second[x]==0){
				//it will be the starting string
				cout<<x<<" "<<all[x]<<" "<<amount[x]<<endl;
				temp=all[x];
				break;
			}
		}

		while(1){
			if(first[all[temp]]==0){
				cout<<temp<<" "<<all[temp]<<" "<<amount[temp]<<endl;
				break;
			}
			else{
				cout<<temp<<" "<<all[temp]<<" " <<amount[temp]<<endl;
				temp=all[temp];
			}
		}

		cout<<sum<<"$"<<endl;

	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}