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
	ll ans=0;
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll m;
	cin>>m;
	vector<ll> p;
	p.resize(n);
	p[0]=a[0];
	for(i=1;i<n;i++)
	{
		p[i]=p[i-1]+a[i];
	}
	vector<ll> asort;
	asort.resize(n);
	for(i=0;i<n;i++)
	{
		asort[i]=a[i];	
	}
	sort(asort.begin(),asort.end());
	vector<ll> psort;
	psort.resize(n);
	psort[0]=asort[0];
	for(i=1;i<n;i++)
	{
		psort[i]=psort[i-1]+asort[i];
	}
	for(i=0;i<m;i++)
	{
		ll type;
		ll l;
		ll r;
		cin>>type;
		cin>>l;
		cin>>r;
		if(type==1)
		{
			if(l!=1)
			{
				ans=p[r-1]-p[l-2];
			}
			else
			{
				ans=p[r-1];
			}
		}
		else
		{
			if(l!=1)
			{
				ans=psort[r-1]-psort[l-2];
			}
			else
			{
				ans=psort[r-1];
			}
		}
		cout<<ans<<"\n";
		ans=0;
	}
	return 0;
}
