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
    	string first,second,third;
    	cin>>first>>second>>third;
    	string v1,v2;
    	cin>>v1>>v2;

    	if(v1==first){
    		cout<<v1<<"\n";
    	}else if(v2==first)cout<<v2<<"\n";
    	else if(v1==second)cout<<v1<<"\n";
    	else if(v2==second)cout<<v2<<"\n";
    	else if(v1==third)cout<<v1<<"\n";
    	else if(v2==third)cout<<v2<<"\n";

    }

}
