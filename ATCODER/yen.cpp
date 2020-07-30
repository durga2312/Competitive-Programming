#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll p;
	ll ans=0;
	if (n%1000==0)
	{
		ans=0;	
	}
	else
	{
		p=(n%1000);
		ans=1000-p;	
	}
	cout<<ans<<"\n";
	return 0;
}
