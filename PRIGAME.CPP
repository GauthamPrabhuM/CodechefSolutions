#include <stdio.h>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int Max=1000000;
int prefix[Max+1];
void fun()
{
    bool pno[Max+1];
    memset(pno,true,sizeof(pno));
    ll i,j;
    for(i=2;i*i<=Max;i++)
    {
        if(pno[i]==true)
        {
            for(j=i*2;j<=Max;j+=i)
            pno[j]=false;
        }
    }
    prefix[0] = prefix[1] = 0;
    for(i=2;i<=Max;i++)
    {
        prefix[i]=prefix[i-1];
        if(pno[i])
        prefix[i]++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    fun();
    ll T;
    cin>>T;
    while(T--)
    {
        ll X,Y;
        cin>>X>>Y;
        if(prefix[X]<=Y)
        cout<<"Chef"<<"\n";
        else
        cout<<"Divyam"<<"\n";
    }
    return 0;
}
