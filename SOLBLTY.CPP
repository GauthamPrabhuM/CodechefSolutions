#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ 
	    int x;
	    int a;
	    int b;
	    cin>>x>>a>>b;
	    int sol=a*10+(100-x)*(b*10);
	    cout<<sol<<endl;
	    
	    
	}
	return 0;
}
