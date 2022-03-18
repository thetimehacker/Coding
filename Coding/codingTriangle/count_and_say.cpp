#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
        if(n==1)return "1";
        else if (n==2)return "11";
        else{
            string s="11";
            n-=2;
            while(n--){
                string ns="";
                // cout<<" initial value : "<<ns<<endl;
                int count=1;
                for(int i=1;i<s.size();i++){
                    if(s[i]!=s[i-1]){
                        ns+=to_string(count);
                      	// cout<<"i = "<<i<<", ns = "<<ns<<endl;
                      	
                        ns+=s[i-1];
                        // cout<<"i = "<<i<<", ns = "<<ns<<endl;
                        count=1;
                    }else count++;
                    // cout<<"count : "<<count<<endl;
                }
                
                ns+=to_string(count);
                // cout<<"count : "<<count<<endl;
                // cout<<"last char  : "<<s[s.size()-1]<<endl;
                // cout<<"last char : to_string : "<<to_string(s[s.size()-1])<<endl;
                // cout<<" after adding count : "<<ns<<endl;
                ns+=(s[s.size()-1]); //last element
                // cout<<"ns = "<<ns<<endl;
                
                s.swap(ns);
                // cout<<"value of s : "<<s<<endl;

            }
            return s;
        }
        
    }
    
    
void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		int n;
		cin>>n;
		
        cout<<countAndSay(n);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}