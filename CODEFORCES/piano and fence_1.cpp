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
	for(i=0;i<k;i++)
	{
		sum=sum+lis[i];
	}
	slis.push_back(mp(sum,0));
	for(i=1;i<n-k+1;i++)
	{
		sum=sum-lis[i-1]+lis[i+k-1];
		slis.push_back(mp(sum,i));
	}
	sort(slis.begin(),slis.end());
	cout<<slis[0].second+1<<"\n";
	return 0;
}
