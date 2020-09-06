//https://www.codechef.com/WOINOIDP/problems/TILES01
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector <ll> dp;
	dp.resize(n+1);
	ll i;
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(i=3;i<=n;i++)
	{
		dp[i]=(dp[i-2]+dp[i-1])%15746;
	}
	cout<<dp[n]<<"\n";
	return 0;
}
