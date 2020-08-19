//https://codeforces.com/problemset/problem/1335/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll i;
	for(i=1;i<=t;i++)
	{
		ll n;
		cin>>n;
		if(n==1)
		{
			cout<<0<<"\n";
		}
		else if(n==2)
		{
			cout<<0<<"\n";
		}
		else
		{
			ll ans;
			if(n%2==0)
			{
				ans=(n/2)-1;
				cout<<ans<<"\n";
			}
			else
			{
				ans=n/2;
				cout<<ans<<"\n";
			}
		}
	}
	return 0;
}
