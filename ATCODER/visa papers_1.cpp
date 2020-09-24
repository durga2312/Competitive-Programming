//https://atcoder.jp/contests/abc155/tasks/abc155_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector <ll> lis;
	lis.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	vector<ll> elis;
	vector<ll> olis;
	for(i=0;i<n;i++)
	{
		if(lis[i]%2==0)
		{
			elis.push_back(lis[i]);
		}
		else
		{
			olis.push_back(lis[i]);
		}
	}
	ll x;
	bool ans=true;
	x=elis.size();
	for(i=0;i<x;i++)
	{
		if((elis[i]%3==0)||(elis[i]%5==0))
		{
			ans=ans;
		}
		else
		{
			ans=false;
		}
	}
	if(ans==true)
	{
		cout<<"APPROVED"<<"\n";
	}
	else
	{
		cout<<"DENIED"<<"\n";
	}
	return 0;
}
