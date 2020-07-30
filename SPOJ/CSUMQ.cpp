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
		for(j=b;j<=c;j++)
		{
			ans=ans+a[j];
		}
	cout<<ans<<"\n";	
	}
	return 0;
}
