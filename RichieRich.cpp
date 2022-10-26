#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,X,x;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>A>>B>>X;
	    x= (B-A)/X;
	    cout<<x<<endl;
	    
	}
	return 0;
}
