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
        string s;
        cin>>s;

        string s1="";
        string s2="";
        ll mid=s.size()/2;

        for(ll i=0; i<s.size()/2; i++)
         s1.push_back(s[i]);
       if(s.size()%2!=0)
            mid++;

         for(ll i=mid; i<s.size(); i++)
          s2.push_back(s[i]);
        
        

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1==s2)
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;

    }
 int main()
    {
        ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
          //      freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);

        ll t=1;
      cin>>t;
        for(int i=1;i<=t;i++)
                    
            solve();
      
        return 0;
    }
