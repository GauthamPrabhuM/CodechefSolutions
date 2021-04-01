// partially solved

    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>

     #define ll long long
    using namespace std;
     int flag=0;
      //static int x=0;
     ll isPrime(ll n)
     {
         ll flag=1;
       for(ll i=2; i<n; i++)
        {if(n%i==0)
          flag=0;}

        return flag;


     }
     
    void solve() 
    {
        ll A[50000];
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
          cin>>A[i];
        ll profit=0;

        sort(A,A+n);
       

   for(ll i=0; i<n; i++)
   {

    profit=max(profit, A[i]*(n-i));
     
    }
    cout<<profit;
   }
 int main()
    {
        ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
              //  freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);

        ll t=1;
      //cin>>t;
        for(int i=1;i<=t;i++)
                    
            solve();
      
        return 0;
    }
