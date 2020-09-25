//https://atcoder.jp/contests/abc153/tasks/abc153_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll h;
	cin>>h;
	ll n;
	cin>>n;
	vector<ll> lis;
	lis.resize(n);
	ll i;
	ll sum=0;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+lis[i];
	}
	if(sum>=h)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
