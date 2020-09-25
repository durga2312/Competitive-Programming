//https://codeforces.com/contest/363/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll k;
	cin>>k;
	vector <pair<ll,ll> >slis;
	vector <ll> lis;
	lis.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	ll sum=0;
	
	for(i=0;i<n+1-k;i++)
	{
		sum=0;
		ll j;
		for(j=0;j<k;j++)
		{
			sum=sum+lis[i+j];
		}
		slis.push_back(mp(sum,i));
	}
	sort(slis.begin(),slis.end());
	cout<<slis[0].second+1<<"\n";
	return 0;
}
