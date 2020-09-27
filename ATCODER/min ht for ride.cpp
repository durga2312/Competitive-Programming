//https://atcoder.jp/contests/abc142/tasks/abc142_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll h;
	cin>>h;
	vector<ll> lis;
	lis.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	ll cnt=0;
	for(i=0;i<n;i++)
	{
		if(lis[i]>=h)
		{
			cnt=cnt+1;
		}
		else
		{
			cnt=cnt;
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
