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
    	long long int num,count=0;
	         cin>>num;
	         int m=(int)sqrt(num);
	         set<long long> s;
	        // cout<<m;
	         for(int i=1;i<=m;i++)
	        { 
	        	//if(i*i<=num)
	        s.insert(i*i);
	        
	         
	         if(i*i*i<=num)
	         s.insert(i*i*i);
	         
	         }
	         
	         
	         if(num==1)
	         cout<<"1"<<endl;
	         else
	        cout<<s.size()<<endl;
    }

}
