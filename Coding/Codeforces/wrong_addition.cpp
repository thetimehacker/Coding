#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    //Start from here
    int t;
    cin>>t;
    while(t--){
		ll k,a,b;
		cin>>k>>a>>b;
		ll sum=0;
		sum+=a+b;
		if(k!=2){
			//k is greater than 2
			ll nextnum=((a+b)%10);
			sum+=nextnum;
			k-=3;	//we have subtracted k 		
			if(k>0 && nextnum!=5 && nextnum!=0){
				//means k is greater than 3
				ll mod=k%4;
				ll div=k/4;

				//we will add the multiplication of div of 20 to sum
				sum+=(div*20);

				//the left numbers will be mod
				while(mod--){
					nextnum=(nextnum*2)%10;
					sum+=nextnum;
					//cout<<"\nsum-> "<<sum;
				}
			}
		}
		if(sum%3==0)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
    }

}
