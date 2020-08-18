//https://www.codechef.com/problems/MAXDIFF
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
		ll k;
		cin>>k;
		vector<ll> lis;
		lis.resize(n);
		ll j;
		for(j=0;j<n;j++)
		{
			cin>>lis[j];
		}
		sort(lis.begin(),lis.end());
		ll suml=0;
		ll sumd=0;
		vector<ll> dlis;
		for(j=0;j<k;j++)
		{
			dlis.push_back(lis[j]);
		}
		vector<ll> slis;
		for(j=n-1;j>n-k-1;j--)
		{
			slis.push_back(lis[j]);
		}
		ll x;
		x=lis.size();
		for(j=0;j<x;j++)
		{
			suml=suml+lis[j];
		}
		ll sums=0;
		for(j=0;j<k;j++)
		{
			sums=sums+slis[j];
		}
		for(j=0;j<k;j++)
		{
			sumd=sumd+dlis[j];
		}
		ll diff1=0;
		diff1=suml-(sumd*2);
		if(diff1<0)
		{
			diff1=diff1*-1;
		}
		else
		{
			diff1=diff1;
		}
		ll diff2=0;
		diff2=suml-(sums*2);
		if(diff2<0)
		{
			diff2=diff2*-1;
		}
		else
		{
			diff2=diff2;
		}
		if(diff1>diff2)
		{
			cout<<diff1<<"\n";
		}
		else
		{
			cout<<diff2<<"\n";
		}
	}
	return 0;
}
