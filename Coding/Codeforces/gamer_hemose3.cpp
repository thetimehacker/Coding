#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,h;
        cin>>n>>h;
        vector <long long int> a;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        
        //sort the vector in descending order
        sort(a.begin(),a.end(),greater<int>());
        //for(int i=0;i<n;i++)cout<<a[i]<<" ";
        long long int x=0,y=0;
        bool flag = false;
        //we can't use y until x>y;
        long long int count=0;
        while(h>0){
            if(x==y){
                h-=a[x];
                count++;
                x++;
            }
            else if(flag==false){
                h-=a[x];
                count++;
                flag=true;
            }
            else{
                h-=a[y];
                count++;
                ++y;
                flag=false;
            }
            //cout<<"value of h : "<<h<<endl;
            if(y==n-1)break;
        }
        cout<<count<<endl;
    }
}