//https://atcoder.jp/contests/abc171/tasks/abc171_b
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
	ll min=0;
	vector<ll> p;
	p.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	sort(p.begin(),p.end());
	for(i=0;i<k;i++)
	{
		min=min+p[i];
	}
	cout<<min<<"\n";
	return 0;
}
