//https://atcoder.jp/contests/abc152/tasks/abc152_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll a;
	cin>>a;
	ll b;
	cin>>b;
	vector<ll> alis;
	alis.resize(b);
	vector<ll> blis;
	blis.resize(a);
	ll i;
	for(i=0;i<a;i++)
	{
		blis[i]=b;
	}
	for(i=0;i<b;i++)
	{
		alis[i]=a;
	}
	if(a==b)
	{
		for(i=0;i<a;i++)
		{
			cout<<blis[i]<<"";
		}
	}
	else if(a>b)
	{
		for(i=0;i<a;i++)
		{
			cout<<blis[i]<<"";
		}
	}
	else
	{
		for(i=0;i<b;i++)
		{
			cout<<alis[i]<<"";
		}
	}
	return 0;
}
