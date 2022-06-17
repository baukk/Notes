#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int l=(s.length()-1);
	    int flag=0;
	    if(l%2==0){
	        for(int i=0;i<=l/2;l++){
	            for(int j=(l/2)+1;j<=l;l++){
	                if(s[i]!=s[j]) flag=1;
	                }    
	            }
	        if (flag==1) cout<<"no\n";
	            else cout<<"yes\n";
	       }
	    else{
	        for(int i=0;i<=l/2;l++){
	            for(int j=(l/2)+2;j<=l;l++){
	                if(s[i]!=s[j]) flag=1;
	                }    
	            }
	        if (flag==1) cout<<"no\n";
	            else cout<<"yes\n";
	       }
	    
	    
	}
	return 0;
}
