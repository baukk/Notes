#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s;
	    for(int j=0;j<n;j++) cin>>s;
	    string ans="";
	    for(int i=0;i<n;i+2){
	        if(s[i]==0 && s[i+1]==0) ans=ans+"A";
	        else if(s[i]==0 && s[i+1]==1) ans=ans+"T";
	        else if(s[i]==1 && s[i+1]==0) ans=ans+"C";
	        else ans=ans+"G";
	    }
	
	    cout<<ans<<endl;
	}
	
	return 0;
}

