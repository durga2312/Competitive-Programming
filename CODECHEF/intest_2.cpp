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
	ll cnt=0;
	ll i;
	for(i=1;i<=n;i++)
	{
		ll t;
		cin>>t;
		if(t%k==0)
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
