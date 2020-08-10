//https://www.codechef.com/problems/NUM239
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll i;
	for(i=1;i<=t;i++)
	{
	ll a;
	cin>>a;
	ll b;
	cin>>b;
	ll cnt=0;
	ll j;
	for(j=a;j<=b;j++)
	{
		ll n;
		n=j%10;
		if((n==2)||(n==3)||(n==9))
		{
			cnt=cnt+1;
		}
		else
		{
			cnt=cnt;
		}
	}
	cout<<cnt<<"\n";
	cnt=0;
	}
	return 0;
}
