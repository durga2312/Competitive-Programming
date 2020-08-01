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
		ll b;
		ll c;
		cin>>a;
		cin>>b;
		cin>>c;
		if(((a>=b)&&(b>=c))||(a<=b)&&(b<=c))
		{
			ans=b;
		}
		else if(((b>=a)&&(a>=c))||((b<=a)&&(a<=c)))
		{
			ans=a;
		}
		else
		{
			ans=c;
		}
		cout<<ans<<"\n";
		ans=0;
	}
	return 0;
}
