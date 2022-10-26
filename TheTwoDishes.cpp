#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,n,s;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>n>>s;
	    int crr=0,aAns;
        if(s<=n)
        ans=s;
        else {
            crr=s-n;
            ans=n-crr;
        }
        cout<<ans<<endl;
    }
	return 0;
}
