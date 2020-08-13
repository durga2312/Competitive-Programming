//https://atcoder.jp/contests/abc168/tasks/abc168_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll k;
	cin>>k;
	string x;
	cin>>x;
	ll n;
	n=x.length();
	if(k>=n)
	{
		cout<<x<<"\n";
	}
	else
	{
		ll i;
		for(i=0;i<k;i++)
		{
			cout<<x[i]<<"";
		}
		cout<<"..."<<"\n";
	}
	return 0;
}
