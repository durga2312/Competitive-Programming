//https://atcoder.jp/contests/abc137/tasks/abc137_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll k;
	cin>>k;
	ll x;
	cin>>x;
	ll i;
	ll a;
	a=x+k;
	ll b;
	b=x-k;
//	if(b>=0)
//	{
		for(i=b+1;i<x;i++)
		{
			cout<<i<<" ";
		}
//	}
//	else
//	{
//		for(i=b+1;i<x;i++)
//		{
//			cout<<i<<" ";
//		}
//	}
	for(i=x;i<a;i++)
	{
		cout<<i<<" ";
	}
	return 0;
}

