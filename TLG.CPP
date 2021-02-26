#include <bits/stdc++.h>
using namespace std;

int main() {
int n,x=0,y=0;;
int a=0,b=0,c,d;
cin>>n;
while(n--)
{
    
    
     cin>>c>>d;
     a+=c;
     b+=d;
     if(a>b)
     {
       int temp=a-b; 
       if(temp>x)
        x=temp;
     }
     else
      {
          int temp=b-a; 
          if(temp>y)
           y=temp;
      }
    
}
   
   if(x>y)
   {
       cout<<1<<" "<<x;
   }
   else
        cout<<2<<" "<<y;
	return 0;
}

