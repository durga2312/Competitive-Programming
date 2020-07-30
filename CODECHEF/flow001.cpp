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
	vector<ll> lis;
	lis.resize(t);
	ll sum1=0;
	for(i=0;i<t;i++)
	{
		ll a=0;
		ll b=0;
		cin>>a;
		cin>>b;
		sum1=a+b;
		lis[i]=sum1;
	}
	for(i=0;i<t;i++)
	{
		cout<<lis[i]<<"\n";
	}
	return 0;
}
