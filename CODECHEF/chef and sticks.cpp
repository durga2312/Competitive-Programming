//https://www.codechef.com/problems/STICKS
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
		vector<ll> lis;
		lis.resize(n);
		ll j;
		for(j=0;j<n;j++)
		{
			cin>>lis[j];
		}
		sort(lis.begin(),lis.end());
		vector<ll> slis;
		for(j=0;j<n-1;j++)
		{
			if(lis[j]==lis[j+1])
			{
				slis.push_back(lis[j]);
				j=j+1;
			}
		}
		ll x;
		x=slis.size();
		if(x<2)
		{
			cout<<-1<<"\n";
		}
		else
		{
			vector<ll> mlis;
			for(j=0;j<x-1;j++)
			{
				ll a;
				a=(slis[j])*(slis[j+1]);
				mlis.push_back(a);	
			}
			sort(mlis.begin(),mlis.end());
			ll b;
			b=mlis.size();
			cout<<mlis[b-1]<<"\n";
		}
		
	}
	return 0;
}

