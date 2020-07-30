#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll i;
	vector<ll>lis;
	lis.resize(n+1);
	for(i=1;i<=n;i++)
		{
			cin>>lis[i];
		}
	bool ans = false;
	for(i=1;i<=n;i++)
	{
		ll j;
		for(j=1;j<=n;j++)
		{
			ll k;
			k=lis[j];
			if((lis[i]==j)&&(lis[k]==i))
			{
				ans=true;	
			}	
		}
	}
	if(ans==true)
		{
			cout<<"yes"<<"\n";
		}
	else
		{
			cout<<"no"<<"\n";
		}
	return 0;
}
