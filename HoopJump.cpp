#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    if(N%2!=0){
	        cout<<(N/2)+1<<endl;
	    }
	}
	return 0;
}
