//https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector<ll> a;
	a.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<ll> dp;
	dp.resize(n+5);
	dp[0]=0;
	dp[1]=abs(a[0]-a[1]);
	for(i=2;i<n;i++)
	{
		dp[i]=min((abs(a[i-1]-a[i])+dp[i-1]),(abs(a[i-2]-a[i])+dp[i-2]));
	}
	cout<<dp[n-1]<<"\n";
	return 0;
}
