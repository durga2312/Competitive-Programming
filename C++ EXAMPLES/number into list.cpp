#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n=0;
	cin>>n;
	ll ntemp=n;
	ll t=0;
	ll r=0;
	ll i;
	for(i=1;i<=19;i++)
	{
		if (n!=0)
		{
			t=t+1;
			n=n/10;
		}
		else
		{
			break;
		}
	}
	vector<ll> lis;
	lis.resize(t);
	for(i=0;i<t;i++)
	{
		if (ntemp!=0)
		{
			r=r+1;
			ll digit = ntemp%10;
			ntemp=ntemp/10;
			lis[i]=digit;
			cout<<lis[i]<<"\n";
		}		
	}
	return 0;
}
