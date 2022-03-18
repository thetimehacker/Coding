// 1 3 5 7 9 11 2 4 6 8 10 12 
// 1 5 9 2 6 10 3 7 11 4 8 12 
// 1 9 6 3 11 8 5 2 10 7 4 12 
// 1 6 11 5 10 4 9 3 8 2 7 12 
// 1 11 10 9 8 7 6 5 4 3 2 12 
// 1 10 8 6 4 2 11 9 7 5 3 12 
// 1 8 4 11 7 3 10 6 2 9 5 12 
// 1 4 7 10 2 5 8 11 3 6 9 12 
// 1 7 2 8 3 9 4 10 5 11 6 12 
// 1 2 3 4 5 6 7 8 9 10 11 12 
// 1 3 5 7 9 11 2 4 6 8 10 12 
// 1 5 9 2 6 10 3 7 11 4 8 12 

#include <bits/stdc++.h>
using namespace std;



void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n,k;
		cin>> n>>k;

		int turns;
		if(n==pow(2,(int)log2(n)))turns=log2(n);
		else turns=n-2; //because n is even 
		if(turns==0)k=0;
		else k=(k%turns);

		int halfturns=turns/2;

		bool reverse=false;
		vector<int> v(n);

		if(k>halfturns){
			k=k%halfturns;
			reverse=true;
		}else k*=2;

		if(k==0){
			for(int i=1;i<=n;i++)cout<<i<<" ";
		}
		else{	
			{
				int stored;
				int j=0;
				for(int i=1;i<=n;i++,j++){
					if(i==1){
						//cout<<1;
						stored=1;
						v[j]=stored;
					}
					else{
						if(stored+k>n){
							//cout<<(stored+k+1)%n;
							stored=(stored+k+1)%n;
							v[j]=stored;
						}
						else {
							//cout<<(stored+k);
							stored+=k;
							v[j]=stored;
						}
					}
					//cout<<" ";
				}
				if(reverse){
					cout<<"1 ";
					for(int i=n-2;i>0;i--)cout<<v[i]<<" ";
					cout<<v[n-1];
				}
				else {
					for(int i=0;i<n;i++)cout<<v[i]<<" ";
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

