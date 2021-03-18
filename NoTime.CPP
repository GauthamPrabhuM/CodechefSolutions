#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//needs H has x N timezones T1 T2... Tn 
	// N H X T1..Tn
	int N;
	int H;
	int X;
	cin>>N>>H>>X;
	int T[N];
	int flag=0;
	for(int i=0; i<N; i++)
	{cin>>T[i];
	 if(T[i]+X>=H)
	 flag=1;
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	
	return 0;
}
