#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int even=0,odd=0;
    if(n%2==0){
        //same number of evens and odd
        long long int x=n/2;
        long long int num=(x*(x+1))/2;
        even = 2*num; 
        odd=even-(n/2);
    }else{
        long long int x=(n-1)/2;
        long long int num=(x*(x+1))/2;
        even = 2*num;
        
        odd=even-(n/2)+n;
    }
    
    cout<<even-odd;
}