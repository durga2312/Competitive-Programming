//https://www.codechef.com/problems/HORSES
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll diff=0;
	ll i;
	for(i=1;i<=t;i++)
	{
		ll n;
		cin>>n;
		ll j;
		vector<ll> lis;
		lis.resize(n);
		vector<ll> dlis;
		for(j=0;j<n;j++)
		{
			cin>>lis[j];
		}
		sort(lis.begin(),lis.end());
		for(j=1;j<n;j++)
		{
			diff=lis[j]-lis[j-1];
			dlis.push_back(diff);
		}
		sort(dlis.begin(),dlis.end());
		cout<<dlis[0]<<"\n";
	}
	return 0;
}
