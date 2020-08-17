//https://www.codechef.com/problems/AMMEAT
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
		ll m;
		cin>>m;
		vector<ll> lis;
		lis.resize(n);
		ll j;
		for(j=0;j<n;j++)
		{
			cin>>lis[j];
		}
		ll sum=0;
		ll cnt=0;
		sort(lis.begin(),lis.end());
		for(j=n-1;j>=0;j--)
		{
			if(sum<m)
			{
				sum=sum+lis[j];
				cnt=cnt+1;
			}
			else
			{
				sum=sum;
				cnt=cnt;
			}
		}
		if(sum<m)
		{
			cout<<-1<<"\n";
		}
		else
		{
			cout<<cnt<<"\n";
		}
	}
	return 0;
}
