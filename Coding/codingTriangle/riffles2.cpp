// 1 3 5 7 9 2 4 6 8 10 
// 1 5 9 4 8 3 7 2 6 10 
// 1 9 8 7 6 5 4 3 2 10 
// 1 8 6 4 2 9 7 5 3 10 
// 1 6 2 7 3 8 4 9 5 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 3 5 7 9 2 4 6 8 10 
// 1 5 9 4 8 3 7 2 6 10 
// 1 9 8 7 6 5 4 3 2 10 
// 1 8 6 4 2 9 7 5 3 10 



#include <bits/stdc++.h>
using namespace std;


// function for GCD
int GCD ( int a , int b )
{
	if (b == 0 )
		return a;
	return GCD( b , a%b ) ;
}

int multiplicativeOrder(int A, int N)
{
	if (GCD(A, N ) != 1)
		return -1;

	// result store power of A that rised to
	// the power N-1
	unsigned int result = 1;

	int K = 1 ;
	while (K < N)
	{
		// modular arithmetic
		result = (result * A) % N ;

		// return smallest +ve integer
		if (result == 1)
			return K;

		// increment power
		K++;
	}

	return 0 ;
}


void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		long long n,k;
		cin>> n>>k;

		int turns;
		if(n==pow(2,(int)log2(n)))turns=log2(n);
		else turns=multiplicativeOrder(2,n-1); //because n is even 
		if(turns==0)k=0;
		else k=(k%turns);

		if(k!=0){
			int num=n;
			int l=k;
			k=1;
			for(int i=1;i<=l;i++){
				k=((2*k));
				if(k>num)k=k%num+1;
			}

		}
		// int halfturns=turns/2;

		bool reverse=false;
		vector<int> v(n);

		// if(k>halfturns){
		// 	k=k%halfturns;
		// 	reverse=true;
		// }else k*=2;

		if(k==0){
			for(int i=1;i<=n;i++)cout<<i<<" ";
		}
		else{	
			int stored;
			int j=0;
			for(int i=1;i<=n;i++,j++){
				if(i==1){
					cout<<1;
					stored=1;
					//v[j]=stored;
				}
				else{
					if(stored+k>n){
						cout<<(stored+k+1)%n;
						stored=(stored+k+1)%n;
						//v[j]=stored;
					}
					else {
						cout<<(stored+k);
						stored+=k;
						//v[j]=stored;
					}
				}
				cout<<" ";
			}
			// if(reverse){
			// 	cout<<"1 ";
			// 	for(int i=n-2;i>0;i--)cout<<v[i]<<" ";
			// 	cout<<v[n-1];
			// }
			// else {
			// 	for(int i=0;i<n;i++)cout<<v[i]<<" ";
			// }
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

