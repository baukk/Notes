#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0,n=0,a=0,b=0;
   
    cin>>t;
	while(t--){
        int ca=0,cb=0;
	     float pa=0,pb=0,p=0;
        cin>>n>>a>>b;
	    int x[n];
	    for(int i=0;i<n;i++){
	        cin>>x[i];
	    }
	
	    for(int j=0;j<n;j++){
	        if(x[j]==a)
	        ca++;
	    }
        for(int k=0;k<n;k++){
	        if(x[k]==b)
	        cb++;
	    }
	    // cout<<"ca"<<ca<<"cb"<<cb<<endl;
        // float m = static_cast<float>(a.y - b.y) / static_cast<float>(a.x - b.x);
        pa=static_cast<float>(ca)/static_cast<float>(n);
        pb=static_cast<float>(cb)/static_cast<float>(n);
        // cout<<"pa"<<pa<<"pb"<<pb<<endl;
	    p=pa*pb;
    
	    cout<<p<<endl;

	}
	return 0;
}
