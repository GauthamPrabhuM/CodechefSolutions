#include <iostream>
#include<algorithm>
using namespace std;

int main() {
 	int test;
	cin>>test;
	while(test)
	{
	     int n,i;
	     cin>>n;
	     long int a[n];
	     for(i=0;i<n;++i)
	     {
	         cin>>a[i];
	  
	    }
	     sort (a,a+n);
	     cout<<2*(a[n-1]-a[0])<<"\n";
	     test--;
	     
	}
	return 0;
}
