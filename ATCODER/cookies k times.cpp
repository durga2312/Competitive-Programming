//https://atcoder.jp/contests/abc149/tasks/abc149_b
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
	ll k;
	cin>>k;
	if(a==k)
	{
		cout<<0<<" "<<b<<"\n";
	}
	else if(k<a)
	{
		cout<<a-k<<" "<<b<<"\n";
	}
	else if((k>a)&&(k<b))
	{
		ll d;
		d=k-a;
		cout<<0<<" "<<b-d<<"\n";
	}
	else if((k>a)&&(k==b))
	{
		ll c;
		c=k-a;
		cout<<0<<" "<<b-c<<"\n";
	}
	else if((a+b)<=k)
	{
		cout<<0<<" "<<0<<"\n";
	}
	else
	{
		ll e;
		e=k-a;
		cout<<0<<" "<<b-e<<"\n";
	}
	return 0;
}
