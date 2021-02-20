#include<bits/stdc++.h>

using namespace std;
int l[10], w[10], pos[10];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>w[i];
            pos[w[i]]=i;
        }
        for(int i=1; i<=n; i++){
            cin>>l[i];
        }
        int ans = 0;
        for(int i=2; i<=n; i++){
            int lp = pos[i-1];
            int toAdd = 0;
            int inPos = pos[i];
            while(pos[i]<=lp){
                pos[i] += l[inPos];
                toAdd++;
            }
            
            ans += toAdd;
        }
        cout<<ans<<endl;
    }
    return 0;
}
