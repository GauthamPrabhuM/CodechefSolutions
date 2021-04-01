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
        while(1)
        {

         ll n;
         cin>>n;
         if(n==42)
          break;
        else
          cout<<n<<endl;
        }



    }
 int main()
    {
        ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
                freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);

        ll t=1;
        //cin>>t;
        for(int i=1;i<=t;i++)
                    
            solve();
      
        return 0;
    }
