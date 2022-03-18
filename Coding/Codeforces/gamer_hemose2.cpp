#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
	signed int h;
        cin>>n>>h;
        vector <int> a,b;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
            b.push_back(temp);
        }
        
        //sort the vector in descending order
        sort(a.begin(),a.end(),greater<int>());
        int x=0,y=0;
        //we can't use y until x>y;
        int count=0;
        while(h>0){
            if(x==y){
                h-=a[x];
                count++;
                x++;
            }
            else {
                h-=b[y];
                count++;
                y++;
            }
            
        }
        cout<<count<<endl;
    }
}