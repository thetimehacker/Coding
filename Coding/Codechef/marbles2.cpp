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
    	int n;
    	cin>>n;
    	string a,b;
    	cin>>a>>b;
    	vector<char> v;
    	for(int i=0;i<n;i++){
    		if(a[i]=='?' && b[i]!='?'){
    			v.push_back(b[i]);
    		}
    		if(b[i]=='?' && a[i]!='?'){
    			v.push_back(a[i]);
    		}
    	}

    	bool vowel=false, conso=false;
    	//take a vector of count of 26 elements
    	vector<int> count(26,0);
    	for(auto x:v){
    		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
    			vowel=true;
    		}
    		else conso=true;
    		count[x-97]++;
    	}

    	//take a replacing char
    	char replacing;
    	if(vowel && conso){
    		//combination of vowel and conso
    		int countv=0,countc=0;//number of vowels and consonants
    		int maxcountv=0,maxcountc=0;//highest number of vowels and consonants
    		char maxv,maxc; //highest times a vowel and character occured
    		for(int i=0;i<count.size();i++){
    			if(i==0||i==4||i==8||i==14||i==20){
    				countv+=count[i];
    				if(count[i]>maxcountv){
    					maxcountv=count[i];
    					maxv=i+97;
    				}
    			}
    			else{
    				countc+=count[i];
    				if(count[i]>maxcountc){
    					maxcountc=count[i];
    					maxc=i+97;
    				}
    			} 
    		}

    		// cout<<endl<<"countv "<<countv;
    		// cout<<endl<<"countc "<<countc;
    		// cout<<endl<<"maxcountv "<<maxcountv;
    		// cout<<endl<<"maxcountc "<<maxcountc;
    		//now we have number of vowels and consonants
    		//we also want highest number of vowels and highest number of conso

    		
            if(maxcountv>maxcountc){
                replacing=maxv;
            }else replacing=maxc;
    		// cout<<endl<<"replacing "<<replacing<<endl;

    	}else if(vowel){
    		//only vowels
    		//find max value of vowels
    		char element;
    		int maxcount=0;
    		for(int i=0;i<count.size();i++){
    			if(count[i]>maxcount){
    				maxcount=count[i];
    				element=i+97;
    			}
    		}
    		if(maxcount>(v.size()-maxcount)){
    			//take replacing char as maxcount char
    			replacing=element;
    		}
    		else{
    			//replace with smallest consonant;
    			replacing='b';
    		}

    	}else{
    		//only consonants
    		//find max value of consonants
    		char element;
    		int maxcount=0;
    		for(int i=0;i<count.size();i++){
    			if(count[i]>maxcount){
    				maxcount=count[i];
    				element=i+97;
    			}
    		}
    		if(maxcount>(v.size()-maxcount)){
    			//take replacing char as maxcount char
    			replacing=element;
    		}
    		else{
    			//replace with smallest vowel;
    			replacing='a';
    		}

    	}

    	//replace every ? of a,b with replacing 
    	for(int i=0;i<n;i++){
    		if(a[i]=='?')a[i]=replacing;
    		if(b[i]=='?')b[i]=replacing;
    	}

    	//now start counting the different elements;
    	int countdiff=0;
    	for(int i=0;i<n;i++){
    		if(a[i]!=b[i]){
    			//if(both are vowels or consonants )inc by 2
    			//else inc by 1
    			if(((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')&&
    			    				(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u'))||
    				((b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')&&
    			    				(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'))){
    				//both are different
    				countdiff+=1;
    			}
    			else{
    				//both are smae;
    				countdiff+=2;
    			}
    		}
    	}

    	cout<<countdiff<<endl;

    }
}
