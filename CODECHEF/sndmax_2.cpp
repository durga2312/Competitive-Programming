#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n=0;
	cin>>n;
	ll i;
	for(i=1;i<=n;i++)
	{
		ll a=0;
		ll b=0;
		ll c=0;
		ll max2=a;
		cin>>a;
		cin>>b;
		cin>>c;
		if (a>=b && a<=c)
		{
			max2=a;
		}
		else if (a<=b && a>=c)
		{
			max2=a;
		}
		else if (a>=b && b>=c)
		{
			max2=b;
		}
		else if (a<=b && b<=c)
		{
			max2=b;
		}
		else if (a>=c && c>=b)
		{
			max2=c;
		}
		else
		{
			max2=c;
		}
			cout<<max2<<"\n";
	}
	return 0;
}

