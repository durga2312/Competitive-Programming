//https://atcoder.jp/contests/abc176/tasks/abc176_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll x;
	cin>>x;
	ll t;
	cin>>t;
	ll ex;
	ex=n-x;
	ll p;
	p=ex/x;
	if(n<=x)
	{
		cout<<t<<"\n";
	}
	
	else
	{
		if(ex<=x)
		{
			cout<<t*2<<"\n";
		}
		else
		{
			if(ex%x==0)
			{
				cout<<(p*t)+t<<"\n";
			}
			else
			{
				cout<<(p*t)+(2*t)<<"\n";
			}
		}
	}
	return 0;
}
