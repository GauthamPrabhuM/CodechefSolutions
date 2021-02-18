#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long on,nn=0;
        int r;
        cin>>on;
        while(on>0)
        {
            r=on%10;
          nn=nn*10+r;
          on/=10;
        }
        cout<<nn<<"\n";
    }
	// your code goes here
	return 0;
}
