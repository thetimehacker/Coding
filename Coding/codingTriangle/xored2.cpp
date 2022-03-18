#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n,k;
		cin>>n>>k;

		vector<int> v={1,2,3};
		if(n<(k-100)){
			int start=8;
			int m;
			if(n%4==0){
				m=n-4;
				int end=start + m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				if(k>3){
					for(auto x:v)cout<<x<<" ";
					cout<<k;
				}
				else{
					if(k==1)cout<<1<<" "<<3<<" "<<5<<" "<<6;
					else if(k==2)cout<<0<<" "<<3<<" "<<4<<" "<<5;
					else cout<<0<<" "<<2<<" "<<4<<" "<<5;
				}
			}
			else if(n%4==1){
				m=n-1;
				int end=start+m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				//for(auto x:v)cout<<x<<" ";
				cout<<k;
			}
			else if(n%4==2){
				m=n-2;
				int end=start+m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				//for(auto x:v)cout<<x<<" ";
				cout<<k<<" "<<0;
			}
			else if(n%4==3){
				m=n-3;
				int end=start+m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				//for(auto x:v)cout<<x<<" ";
				//cout<<k<<0;
				if(k%2==0){
					cout<<0<<" "<<1<<" "<<(k+1);
				}
				else {
					if(k!=1)cout<<0<<" "<<1<<" "<<(k-1);
					else cout<<0<<" "<<2<<" "<<3;
				}
			} 


		}
		else{
			//if k>3
			if(n%4==0){
				int m=n-4;
				//we have to print m numbers and then remaining 4 numbers 
				int start=k-(k%4)+8;
				int end=start+m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				if(k>3){
					for(auto x:v)cout<<x<<" ";
					cout<<k;
				}
				else{
					if(k==1)cout<<1<<" "<<3<<" "<<5<<" "<<6;
					else if(k==2)cout<<0<<" "<<3<<" "<<4<<" "<<5;
					else cout<<0<<" "<<2<<" "<<4<<" "<<5;
				}

			}
			else if(n%4==1){
				int m=n-1;
				//we have to print m numbers and then remaining 4 numbers 
				int start=k-(k%4)+8;
				int end=start+m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				//for(auto x:v)cout<<x<<" ";
				cout<<k;
			}
			else if(n%4==2){
				int m=n-2;
				//we have to print m numbers and then remaining 4 numbers 
				int start=k-(k%4)+8;
				int end=start+m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				//for(auto x:v)cout<<x<<" ";
				cout<<0<<" "<<k;
			}
			else if(n%4==3){
				int m=n-3;
				//we have to print m numbers and then remaining 4 numbers 
				int start=k-(k%4)+8; //we will start after 8 numbers because we can include the next 
				//iteration numbers
				int end=start+m;
				for(int i=start;i<end;i++)cout<<i<<" ";
				//for(auto x:v)cout<<x<<" ";
				//cout<<k<<0;
				if(k%2==0){
					cout<<0<<" "<<1<<" "<<(k+1);
				}
				else {
					if(k!=1)cout<<0<<" "<<1<<" "<<(k-1);
					else cout<<0<<" "<<2<<" "<<3;
				}
			}
		}
		cout<<endl;
	}
}

int main() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    //Start from here
    
    sol();

}

