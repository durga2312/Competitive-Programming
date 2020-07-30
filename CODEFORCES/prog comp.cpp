#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n=0;
	cin>>n;
	ll cnt=0;
	ll i;
	for(i=1;i<=n;i++)
	{
		ll a;
		ll b;
		ll c;
		ll tot=0;
		cin>>a;
		cin>>b;
		cin>>c;
		if(a==1)
		{
			tot=tot+1;
		}
		if(b==1)
		{
			tot=tot+1;
		}
		if(c==1)
		{
			tot=tot+1;
		}
		if(tot>=2)
		{
			cnt=cnt+1;	
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
