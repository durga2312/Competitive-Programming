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
	for(i=0;i<n;i++)
	{
		ll a=0;
		ll b=0;
		ll c=0;
		cin>>a;
		cin>>b;
		cin>>c;
		vector<ll> lis;
		lis.resize(3);
		lis[0]=a;
		lis[1]=b;
		lis[2]=c;
		sort(lis.begin(),lis.end());
		cout<<lis[1]<<"\n";
	}
	return 0;
}
		
		
		
