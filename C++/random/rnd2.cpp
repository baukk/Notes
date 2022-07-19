#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int n,k,t;
	cin>>t;
	while(t--){
		cin>>n>>k;
	     int max=0;
	  for( int i=1;i<k;i++){
	      if((n%k)>=max) 
	      max=n%k;
	  }
	cout<<max<<endl;
	}
	return 0;
}
