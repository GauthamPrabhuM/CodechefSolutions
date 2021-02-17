#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() 
{
    fast;
	int n;
	cin>>n;
	for(int i=10;i>=1;i--)
	{
	    if(n%i == 0)
	    {
	        cout<<i;
	        return 0;
	    }
	}
}
