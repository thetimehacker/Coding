#include <bits/stdc++.h>
using namespace std;

bool binarysearch(int * arr,int l,int r,int s)
{
    int mid;
    if(r-l<0)return false;
    else if(r-l==0){
        if(arr[l]==s)return true;
        else return false;
    }
    else {
        mid=(r-l)/2;
    }
    bool result=false;
    
    if(s==arr[mid]){
        return true;
    }
    else if(s<arr[mid]){
        
        result=binarysearch(arr,l,mid-1,s);
    }else {
        result=binarysearch(arr,mid+1,r,s);
    }
    
    if(result)return true;
    else return false;
}
int main() {
    //implementing binary search
    int n,k;
    cin>>n>>k;
    vector <int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    
    for(int i=0;i<k;i++){
        int s;
        cin>>s;
        bool result= binarysearch(&a[0],0,n-1,s);
        
        if(result)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}