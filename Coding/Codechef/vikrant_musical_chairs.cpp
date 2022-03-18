#include <bits/stdc++.h>
using namespace std;


void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
	// your code goes here
	call();
	int t;
	cin>>t;
	while(t!=0)
	{
	       int a,b,count=0,n=0;
	       cin>>a;
	    
	    if(a%2==0)
		{ 
			for(int i=1;i<=(a)/2;i++)
		    {  if((a-1)%i==0)
		       count++;
		    }
		}
	    else if(a%2!=0)
	    {
	            for(int i=1;i<=(a-1)/2;i++)
	            {
	                    if((a-1)%i==0)
	                    count++;
	            }
	    }
	    if(a<=2)
	    cout<<1<<endl;
	    else
	    cout<<count+1<<endl;
	    t--;
	}
	return 0;
}