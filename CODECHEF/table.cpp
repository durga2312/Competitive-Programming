#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n=0;
	ll r=0;
	cin>>n;
	cin>>r;
	ll i;
	for(i=1;i<=r;i++)
	{
		ll val;
		val=n*i;
		cout<<n<<"x"<<i<<"="<<val<<"\n";
	}
	return 0;
}
