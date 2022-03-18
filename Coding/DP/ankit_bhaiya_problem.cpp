#include <bits/stdc++.h>
using namespace std;

set<int> nt1; //to store different tank capacities after 4 days

void solve(int t1,int t2, vector<int> b1, vector<int> b2, int days, bool start_with_A=true){
	if(days==0){
		nt1.insert(t1);
		// cout<<"Day : "<<days<<endl;
		// cout<<"start_with_A : "<<start_with_A<<endl;
		// cout<<"t1 : "<<t1<<endl;
		// cout<<"t2 : "<<t2<<endl;
		// for(auto x:b1)cout<<x<<" ";
		// cout<<endl;
		// for(auto x:b2)cout<<x<<" ";
		// cout<<endl;
	}
	else{
		// cout<<"Day : "<<days<<endl;
		// cout<<"start_with_A : "<<start_with_A<<endl;
		// cout<<"t1 : "<<t1<<endl;
		// cout<<"t2 : "<<t2<<endl;
		// for(auto x:b1)cout<<x<<" ";
		// cout<<endl;
		// for(auto x:b2)cout<<x<<" ";
		// cout<<endl;
		if(start_with_A){
			for(int i=0;i<b1.size();i++){
				if(b1[i]>0){					
					//taking new varibles for tank capacities
					int newt1=t1,newt2=t2;
					vector<int> newb1=b1,newb2=b2;
					newt1-=newb1[i];
					newt2+=newb1[i];
					//bucket from b1 will be added to b2
					newb2.push_back(newb1[i]);
					
					newb1[i]=-1;
					
					solve(newt1,newt2,newb1,newb2,days-1,!start_with_A);
				}
			}
		}
		else{
			for(int i=0;i<b2.size();i++){
				if(b2[i]>0){
					//taking new varibles for tank capacities
					int newt1=t1,newt2=t2;
					vector<int> newb1=b1,newb2=b2;
					newt2-=newb2[i];
					newt1+=newb2[i];
					//bucket from b2 will be added to b1
					newb1.push_back(newb2[i]);
					newb2[i]=-1;
					
					solve(newt1,newt2,newb1,newb2,days-1,!start_with_A);
				}
			}
		}
	}
}


void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//initial capacity of both the tanks
		int t1,t2;
		cin>>t1>>t2;
		
		//10 buckets for each tank
		vector<int> b1(10),b2(10);
		
		//getting the capacity of each bucket
		for(auto &x:b1)cin>>x;
		for(auto &x:b2)cin>>x;
		
		int days;
		cin>>days;
		
		//to get the number of different values of Tank T1 on saturday
		// monday - 1000 L in both tanks
		// from tues->wed->thrus->Fri  (t1 will start)
		// so we will process queries for 4 days
			
		solve(t1,t2,b1,b2,days);
		
		//printing the length and different capacities;
		cout<<nt1.size()<<endl;
		if(!nt1.empty())
			for(auto x:nt1)cout<<x<<" ";
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}