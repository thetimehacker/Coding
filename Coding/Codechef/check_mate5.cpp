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
    	int k,l,a,b,x,y;
    	cin>>k>>l>>a>>b>>x>>y;

    	if((k==1 || k==2)&&(l==1 || l==2)){
    		if(((abs(k-a)<=1)&&(abs(l-b)<=1))||((abs(k-x)<=1)&&(abs(l-y)<=1))){
    			cout<<"NO\n";
    		}
    		else{
    			if(k==1){
                    if(l==1){
                        if((a==1||x==1)&&(b>2 && y>2)){
                            cout<<"YES\n";
                        }else if((a==2||x==2)&&(b>2 && y>2 && b!=y)){
                            cout<<"YES\n";
                        }else if((b==1||y==1)&&(a>2 && x>2)){
                            cout<<"YES\n";
                        }else if((b==2||y==2)&&(a>2 && x>2 && a!=x)){
                            cout<<"YES\n";
                        }else cout<<"NO\n";
                    }
                    else{//l=8
                        if((a==1||x==1)&&(b<7 && y<7)){
                            cout<<"YES\n";
                        }else if((a==2||x==2)&&(b<7 && y<7 && b!=y)){
                            cout<<"YES\n";
                        }else if((b==1||y==1)&&(a<7 && x<7)){
                            cout<<"YES\n";
                        }else if((b==2||y==2)&&(a<7 && x<7 && a!=x)){
                            cout<<"YES\n";
                        }else cout<<"NO\n";
                    }
                }
                else{//k=8
                    if(l==1){
                        if((a==8||x==8)&&(b>2 && y>2)){
                            cout<<"YES\n";
                        }else if((a==7||x==7)&&(b>2 && y>2 && b!=y)){
                            cout<<"YES\n";
                        }else if((b==8||y==8)&&(a>2 && x>2)){
                            cout<<"YES\n";
                        }else if((b==7||y==7)&&(a>2 && x>2 && a!=x)){
                            cout<<"YES\n";
                        }else cout<<"NO\n";
                    }
                    else{//l=8
                        if((a==8||x==8)&&(b<7 && y<7)){
                            cout<<"YES\n";
                        }else if((a==7||x==7)&&(b<7 && y<7 && b!=y)){
                            cout<<"YES\n";
                        }else if((b==8||y==8)&&(a<7 && x<7)){
                            cout<<"YES\n";
                        }else if((b==7||y==7)&&(a<7 && x<7 && a!=x)){
                            cout<<"YES\n";
                        }else cout<<"NO\n";
                    }
                }
    		}

    	}
    	else cout<<"NO\n";
    }

}
