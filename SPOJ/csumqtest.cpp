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
	vector<ll> p;
	p.resize(n);
	p[0]=a[0];
	for(i=1;i<n;i++)
	{
		p[i]=p[i-1]+a[i];
	}
	ll q;
	cin>>q;
	for(i=0;i<q;i++)
	{
		ll b;
		ll c;
		cin>>b;
		cin>>c;
		ll ans=0;
		ll j;
		if(b!=0)
		{
			ans=p[c]-p[b-1];
		}
		else
		{
			ans=p[c];	
		}
	cout<<ans<<"\n";	
	}
	return 0;
}
