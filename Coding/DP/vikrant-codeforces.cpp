#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	         string str;
	         int count=0;
	         cin>>str;
	         if(str[0]=='R' or str[0]=='B' or str[0]=='G')
	         cout<<"NO"<<endl;
	         else{
	         for(int i=0;i<str.length();i++){
	                  if(str[i]=='r')
	                 { for(int j=i+1;j<=str.length();j++)
	                 { if(str[j]=='R')
	                  {count=1;
	                  break;}
	                  else count=0;
	                 }
	                }
	                 else if(str[i]=='g')
	                 { for(int j=i+1;j<=str.length();j++)
	                 { if(str[j]=='G')
	                  {count=1;
	                  break;}
	                  else count=0;
	                 }}
	               else   if(str[i]=='b')
	                 { for(int j=i+1;j<=str.length();j++)
	                 { if(str[j]=='B')
	                  {count=1;
	                  break;}
	                  else count=0;
	                 }}
	                 if(count==0)break;
	         }
	           if(count==1)
	               {cout<<"YES"<<endl;
	               }
	               else cout<<"NO"<<endl;
	         }
	}
}