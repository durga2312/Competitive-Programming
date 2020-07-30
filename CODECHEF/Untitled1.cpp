#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main();
{
	ios::sync_with_main(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll i;
	vector<ll>lis;
	lis.resize(n);
	for(i=0;i<n;i++)
	{
		a[i]=a[i-1];
		ll j;
		for(j=0;j<n;j++)
		{
			ll k;
			for(k=0;k<n;k++)
			{
				if(lis[k]==j)
				{
					cout<<"yes"<<"\n";	
				}
				if(lis[j]==i)
				{
					cout<<"yes"<<"\n";	
				}
			}
		}
	}
	return 0;
}
