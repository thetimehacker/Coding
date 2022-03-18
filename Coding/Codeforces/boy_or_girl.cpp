#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv) {
    string s;
    cin>>s;
    vector <char> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    //sort the std::vector
    sort(v.begin(),v.end());
    int count=1;
    char match=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]!=match){
            count++;
            match=v[i];
        }
    }
    if(count%2==0){
        //even
        cout<<"CHAT WITH HER!";
    }else cout<<"IGNORE HIM!";
}