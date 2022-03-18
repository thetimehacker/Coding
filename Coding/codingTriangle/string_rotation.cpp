#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		//checking if b is rotation of a or not
		
		if(a.size()>=b.size()){
			deque<char> d;
			for(auto x:a){
				d.push_back(x);
			}
			
			bool result=false;
			int n=a.size();
			int li=0;
			while(1){
				cout<<"d[0] = "<<d[0]<<"\na[0] = "<<b[0]<<endl;
				if(d[0]==b[0]){
					cout<<d[0]<<" == "<<b[0]<<endl;
					bool flag=true;
					for(int i=0;i<b.size();i++){
						if(d[i]!=b[i]){
							flag=false;
							break;
						}
					}
					if(flag){
						result=true;
						break;
					}
				}
				else{
					//if the result does not match
					//shift first to last
					d.push_back(d[0]);
					d.pop_front();
				}
				li++;
				if(li==n)break;
			}
			
			if(result)cout<<"match";
			else cout<<"no match";
			cout<<endl;
		}
		else cout<<"no match";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}