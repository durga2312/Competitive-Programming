#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n=0;
	ll k=0;
	ll t=0;
	cin>>n;
	cin>>k;
	ll tot=0;
	ll i;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		if (t%k==0)
		{
			tot++;
		}
		
	}
	cout<<tot<<"\n";
	return 0;
}
