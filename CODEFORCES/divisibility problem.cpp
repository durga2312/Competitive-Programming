//https://codeforces.com/problemset/problem/1328/A
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
		ll a;
		cin>>a;
		ll b;
		cin>>b;
		if(a%b==0)
		{
			cout<<0<<"\n";
		}
		else
		{
			if(b>a)
			{
				ll ans;
				ans=b-a;
				cout<<ans<<"\n";
			}
			else
			{
				ll rem;
				rem=a%b;
				ll diff;
				diff=b-rem;
				cout<<diff<<"\n";
			}
			
		}
	}
	return 0;
}
