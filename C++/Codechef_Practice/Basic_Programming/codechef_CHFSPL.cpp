// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,a,b,c;
// 	cin>>t;
// 	while(t--){
// 	    cin>>a>>b>>c;
// 	    if(a>c && b>c)
// 	    cout<<a+b<<endl;
// 	    else if(b>a && c>a)
// 	    cout<<b+c<<endl;
// 	    else if (a>b && c>b)
// 	    cout<<a+c<<endl;
// 	}
// 	return 0;
// }


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
        cout<<max({a+b,b+c,a+c})<<"\n";
        
	}
	return 0;
}
