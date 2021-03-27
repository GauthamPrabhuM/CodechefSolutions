    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #define ll long long
    using namespace std;
     
     
    void solve() 
    {
           int X;
           float Y;
           cin>>X>>Y;
           if(X%5==0)
            Y=Y-X-0.5;
           cout<<Y;
    }

    int main()
    {
        ios::sync_with_stdio(0);
            ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
                 
                cout<<fixed;
                cout<<setprecision(10);
            //freopen("input.txt", "r", stdin);
              //  freopen("output.txt", "w", stdout);
                int t= 1;
                //cin>>t;
                for(int i=1;i<=t;i++){
                    solve();
        }
        return 0;
    }
