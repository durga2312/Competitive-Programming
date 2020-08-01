#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll ans=0;
	ll i;
	for(i=1;i<=n;i++)
	{
		ll a;
		cin>>a;
		ll b;
		cin>>b;
		ans=a+b;
		cout<<ans<<"\n";
		ans=0;
	}
	return 0;
}
