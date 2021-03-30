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

         int n;
         cin>>n;
         int A[500];
         int count=0;
         int count1=0;
         int count2=0;
         for(int i=0; i<n; i++)
          {cin>>A[i];
            if(A[i]%2!=0)
              count1++;
            else
              count2++;
          }
          if(count2>count1)
            count=count1;
          else
            count=count2;

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
