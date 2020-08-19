//https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	ll t;
	cin>>t;
	ll a;
	ll b;
	ll c;
	ll d;
	ll i;
	for(i=t+1;i<=9999;i++)
	{
		n=i;
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		c=n%10;
		n=n/10;
		d=n%10;
		
		if((a!=b)&&(b!=c)&&(c!=d)&&(d!=a)&&(a!=c)&&(b!=d))
		{
			cout<<i<<"\n";
			break;
		}
	}
	return 0;
}
