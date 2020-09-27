//https://atcoder.jp/contests/abc176/tasks/abc176_c
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
	lis.resize(n);
	vector<ll> clis;
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	for(i=0;i<n-1;i++)
	{
		ll cnt=0;
		if(lis[i]<=lis[i+1])
		{
			cnt=cnt;
		}
		else
		{
			cnt=lis[i]-lis[i+1];
			clis.push_back(cnt);
			lis[i+1]=lis[i];
		}
	}
	ll x;
	x=clis.size();
	ll sum=0;
	for(i=0;i<x;i++)
	{
		sum=sum+clis[i];
	}
	cout<<sum<<"\n";
	return 0;
}
