    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>

     #define ll long long
    using namespace std;
     int flag=0;
      //static int x=0;
     
    void solve() 
    {

       int count=0;
       ll n;
       cin>>n;

       while(n)
       {

         int t=n%10;
         if(t==4)
          count++;
        n=n/10;

       }
       cout<<count<<endl;

    }

 int main()
    {
        ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
        ll t=1;
        cin>>t;
        for(int i=1;i<=t;i++)
                    
            solve();
      
        return 0;
    }
