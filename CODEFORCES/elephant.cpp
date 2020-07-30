#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n=0;
	cin>>n;
	ll ans=0;
	ll i;
	for(i=1;i<=n;i++)
	{
		if(n%5==0)
		{
			ans=n/5;	
		}	
		else 
		{
			ans=(n/5)+1;
		}	
	}
	cout<<ans<<"\n";
	return 0;
}
