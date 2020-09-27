//https://atcoder.jp/contests/abc144/tasks/abc144_b
#include <bits/stdc++.h>;
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll i;
	ll j;
	vector <ll> lis;
	ll p;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			p=i*j;
			lis.push_back(p);
			p=0;
		}
	}
	ll x;
	x=lis.size();
	ll cnt=0;
	for(i=0;i<x;i++)
	{
		if(n==lis[i])
		{
			cnt=cnt+1;
		}
		else
		{
			cnt=cnt;
		}
	}
	if(cnt>=1)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";	
	}
	
	return 0;
}
