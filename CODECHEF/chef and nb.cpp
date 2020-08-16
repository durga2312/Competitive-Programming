//https://www.codechef.com/problems/CNOTE
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
		ll x;
		cin>>x;
		ll y;
		cin>>y;
		ll k;
		cin>>k;
		ll n;
		cin>>n;
		bool ans=false;
		if(y>=x)
		{
			ans=true;
		}
		ll j;
		for(j=0;j<n;j++)
		{
			ll p;
			cin>>p;
			ll m;
			cin>>m;
			if((p>=(x-y))&&(k>=m))
				{
					ans=true;
				}
				else
				{
					ans=ans;
				}
		}
		if(ans==true)
		{
			cout<<"LuckyChef"<<"\n";
		}
		else
		{
			cout<<"UnluckyChef"<<"\n";
		}
	}
	return 0;
}
