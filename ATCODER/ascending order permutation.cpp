//https://atcoder.jp/contests/abc135/tasks/abc135_b
#include<bits/stdc++.h>
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
	vector<ll>lis1;
	lis1.resize(n);
	ll x;
	x=1;
	for(i=0;i<n;i++)
	{
		lis1[i]=x;
		x=x+1;
	}
	ll cnt=0;
	for(i=0;i<n;i++)
	{
		if(lis[i]==lis1[i])
		{
			cnt=cnt+1;
		}
		else
		{
			cnt=cnt;
		}
	}
	if(cnt==n)
	{
		cout<<"YES"<<"\n";
	}
	else if(cnt==n-2)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
	return 0;
}
