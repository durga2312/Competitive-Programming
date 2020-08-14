//https://www.codechef.com/problems/CHEFA
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector<ll> lis;
	ll sum=0;
	ll p;
	ll i;
	for(i=1;i<=n;i++)
	{
		cin>>p;
		lis.resize(p);
		ll j;
		for(j=0;j<p;j++)
		{
			cin>>lis[j];
		}
		sort(lis.begin(),lis.end());
		for(j=p-1;j>=0;j=j-2)
		{
			sum=sum+lis[j];
		}
		cout<<sum<<"\n";
		sum=0;
	}
	return 0;
}
