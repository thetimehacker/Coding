#include<iostream>
using namespace std;
int main()
{
    
    int n,seconds;
    string s;
    cin>>n>>seconds>>s;
    int a[n];
    for(int i=0;i<n;i++){
        if(s[i]=='G')a[i]=0;
        else a[i]=1;
    }
    cout<<"=";
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    for(int j=0;j<seconds;j++){
        for(int i=0;i<n-1;){
            if(a[i]>a[i+1]){
                a[i]--;
                a[i+1]++;
                //swapped the positions
                i+=2;
            }
            else i++;
        }
        cout<<">";
        for(int k=0;k<n;k++){
            cout<<a[k];
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        if(a[i]==0)cout<<'G';
        else cout<<'B';
    }
}