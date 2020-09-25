//https://atcoder.jp/contests/abc151/tasks/abc151_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll k;
	cin>>k;
	ll m;
	cin>>m;
	vector<ll> lis;
	lis.resize(n-1);
	ll i;
	for(i=0;i<n-1;i++)
	{
		cin>>lis[i];
	}
	ll sum=0;
	for(i=0;i<n-1;i++)
	{
		sum=sum+lis[i];
	}
	ll a;
	a=n*m-sum;
	if(a<0)
	{
		cout<<0<<"\n";
	}
	else if(a<=k)
	{
		cout<<a<<"\n";
	}
	else
	{
		cout<<-1<<"\n";
	}
	return 0;
}
