#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b,c;
    cin>>a>>b>>c;
    vector<char> first;
    vector<char> second;
    if(a.size()+b.size()==c.size()){
        //fit all the letters in the vector
        for(int i=0;i<a.size();i++){
            first.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            first.push_back(b[i]);
        }
        for(int i=0;i<c.size();i++){
            second.push_back(c[i]);
        }
        //sort both the vectors
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        //start comparing
        bool flag=true;
        for(int i=0;i<a.size()+b.size();i++){
            if(first[i]!=second[i]){
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
    }
    else{
        cout<<"NO";
    }
}