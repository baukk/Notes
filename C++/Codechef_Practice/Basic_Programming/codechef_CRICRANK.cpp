#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t,r1,w1,c1,r2,w2,c2;
	cin>>t;
	while(t--){
    cin>>r1>>w1>>c1;
    cin>>r2>>w2>>c2;
    int a=0,b=0;
    if(r1>r2)
        a++;
    else
    b++;
    if(w1>w2)
        a++;
    else
    b++;
    if(c1>c2)
        a++;
    else
    b++;
    
    if(a>b)
    cout<<"A"<<endl;
    else cout<<"B"<<endl;
	}
	return 0;
}
