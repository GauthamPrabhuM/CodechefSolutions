#include "bits/stdc++.h"
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int count=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                count++;
            }
        }
        if(s[n-1]=='1') count++;
        cout<<count<<endl;
    }
}
