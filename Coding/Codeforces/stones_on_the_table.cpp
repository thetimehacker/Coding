#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv) {
    int t;
    cin>>t;
	string s1;
	cin>>s1;
	int count=0;
	int j=1;
	for(int i=0;i<s1.size()-1,j<s1.size();){
	    if(s1[i]==s1[j]){
	        count++;//remove this char
	        j++;
	    }
	    else {
	        i=j;
	        j++;
	        }
	}
	cout<<count;
}