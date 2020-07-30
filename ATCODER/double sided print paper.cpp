#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll ans;
	if(n%2==0)
	{
		ans=n/2;	
	}
	else
	{
		ans=(n/2)+1;
	}
	cout<<ans<<"\n";
	return 0;
}
