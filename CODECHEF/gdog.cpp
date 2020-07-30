#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t=0;
	cin>>t;
	ll i;
	for(i=1;i<=t;i++)
	{
		ll n=0;
		cin>>n;
		ll k=0;
		cin>>k;
		vector<ll> lis;
		lis.resize(k+1);
		ll j;
		for(j=1;j<=k;j++)
		{
			lis[j]=n%j;
		}
		sort(lis.begin(),lis.end());
		cout<<lis[k]<<"\n";
	}
	return 0;
}
