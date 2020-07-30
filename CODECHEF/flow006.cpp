#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll j;
	for(j=1;j<=t;j++)
	{
	ll n=0;
	cin>>n;
	ll ntemp=n;
	ll p=0;
	ll i;
	for(i=1;i<=19;i++)
	{
		if (n!=0)
		{
			p=p+1;
			n=n/10;
		}
		else
		{
			break;
		}
	}
	ll sum1=0;
	for(i=0;i<p;i++)
	{
		if (ntemp!=0)
		{
			ll digit = ntemp%10;
			ntemp=ntemp/10;
			sum1=sum1+digit;
		}		
	}
	cout<<sum1<<"\n";
	}
	return 0;
}
