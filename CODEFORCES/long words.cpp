#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll p;
	cin>>p;
	ll i;
	for(i=1;i<=p;i++)
	{
		ll n;
		string x;
		cin>>x;
		n=x.length();
		if (n<=10)
		{
			cout<<x<<"\n";
		}
		else
		{
			cout<<x[0]<<n-2<<x[n-1]<<"\n";
		}
	}
	return 0;
}
