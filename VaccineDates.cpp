#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,D,L,R;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>D>>L>>R;
	    if(D>=L && D<=R){
	        cout<<"Take second dose now"<<endl;
	    }else if(D<L){
	        cout<<"Too Early"<<endl;
	    }else{
	        cout<<"Too Late"<<endl;
	    }
	}
	return 0;
}
