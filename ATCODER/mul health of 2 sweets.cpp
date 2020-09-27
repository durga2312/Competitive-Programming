//https://atcoder.jp/contests/abc143/tasks/abc143_b
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
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	vector <ll> slis;
	ll prod=0;
	for(i=0;i<n-1;i++)
	{
		ll j;
		for(j=i+1;j<n;j++)
		{
			prod=0;
			prod=lis[i]*lis[j];
			slis.push_back(prod);
		}
	}
	ll x;
	x=slis.size();
	ll sum=0;
	for(i=0;i<x;i++)
	{
		sum=sum+slis[i];
	}
	cout<<sum<<"\n";
	return 0;
}
