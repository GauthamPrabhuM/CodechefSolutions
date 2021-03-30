#include<iostream>
#include<bits/stdc++.h>
#define rf freopen("in.in", "r", stdin)
#define wf freopen("out.out", "w", stdout)
#define rep(i, s, n) for(int i=int(s); i<=int(n); ++i)
using namespace std;
const int mx = 1e5 + 10, mod = 1e9+7;

int main()
{
	//rf;// wf;
	ios::sync_with_stdio(0);
	
	int t;
	cin >> t;
	while(t--)
	{
		int apples, oranges, k;
		cin >> apples >> oranges >> k;

		cout << max(apples, oranges) - min(min(apples, oranges) + k, max(apples, oranges)) << '\n';
	}
		
	return 0;
}
