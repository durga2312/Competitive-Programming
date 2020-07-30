#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	freopen("bcount.in","r",stdin); 
    freopen("bcount.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll q;
	cin>>q;
	ll ans1=0;
	ll ans2=0;
	ll ans3=0;
	ll cnt1=0;
	ll cnt2=0;
	ll cnt3=0;
	vector<ll> a;
	a.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<ll> d;
	d.resize(n);
	d[0]=a[0];
	vector<ll> e;
	e.resize(n);
	e[0]=a[0];
	vector<ll> f;
	f.resize(n);
	f[0]=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			cnt1=cnt1+1;
		}
		else
		{
			cnt1=cnt1;
		}
		d[i]=cnt1;
		if(a[i]==2)
		{
			cnt2=cnt2+1;
		}
		else
		{
			cnt2=cnt2;
		}
		e[i]=cnt2;
		if(a[i]==3)
		{
			cnt3=cnt3+1;
		}
		else
		{
			cnt3=cnt3;
		}
		f[i]=cnt3;
	}
	for(i=0;i<q;i++)
	{
		ll b;
		ll c;
		cin>>b;
		cin>>c;
		if(b!=1)
		{
			ans1=d[c-1]-d[b-2];
		}
		else
		{
			ans1=d[c-1];
		}
		if(b!=1)
		{
			ans2=e[c-1]-e[b-2];
		}
		else
		{
			ans2=e[c-1];
		}
		if(b!=1)
		{
			ans3=f[c-1]-f[b-2];
		}
		else
		{
			ans3=f[c-1];
		}
		cout<<ans1<<" ";
		cout<<ans2<<" ";
		cout<<ans3<<"\n";
	}
	return 0;
}
