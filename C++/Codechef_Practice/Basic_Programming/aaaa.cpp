#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,sum=0,rem=0;
	int m[]={6,2,5,5,4,5,6,3,7,6};
	cin>>t;
	while(t--){
    
	    cin>>a>>b;
	    sum=a+b;
        int suma=0;
	    while(sum!=0){
	        rem=sum%10;
	        suma=suma+m[rem];
	        sum=sum/10;
	    }
        cout<<suma<<endl;
	}
	return 0;
}
