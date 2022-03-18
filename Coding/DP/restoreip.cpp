#include <bits/stdc++.h>
using namespace std;

vector<string> v;
void restore(string rem,int count,string sf){
    if(count>2)
    {
        stringstream ss(rem);
        int x;
        ss>>x;
        if(rem.size()>3||x>255||(rem[0]=='0' &&rem.size()>1)){
            sf+=rem+"#";
            v.push_back(sf);
            return;
        }
        else{
            sf+=rem;
            v.push_back(sf);
            return;
        }
       
    }
    
    if(rem[0]=='0'){
        //if first char after dot is zero
        restore(rem.substr(1,rem.size()-1),count+1,sf+"0.");
    }
    else{
        for(int i=1;i<=3;i++){
            if(rem.size()<i)break;
            int newcount=count;
            string t=rem.substr(0,i);
            stringstream ss(t);
            int x;
            ss>>x;
            if(x>255){
                sf+=rem+'#';
                v.push_back(sf);
                return;
            }
            else restore(rem.substr(i,rem.size()-1),newcount+1,sf+t+'.');
        }
    }
}
void restoreIpAddresses(string s) {
    restore(s,0,"");
    
    //printing the full vector
    // for(auto x:v)cout<<x<<endl;
    //we will not return strings containing #
    vector<string> a;
    for(auto x:v){
        if(x[x.size()-1]!='#' && x[x.size()-1]!='.'){
        	// a.push_back(x);
        	cout<<x<<" ";
        }
    }
    // return a;
}

void sol(){
	string s;
	cin>>s;
	restoreIpAddresses(s);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}