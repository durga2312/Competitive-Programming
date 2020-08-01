#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll j;
	for(j=1;j<=t;j++)
	{
	string n;
	cin>>n;
	ll l;
	l=n.length();
	ll sum=0;
	ll i;
	for(i=0;i<l;i++)
	{
		ll val=0;
		val=(int)n[i]-(ll)'0';
		sum=sum+val;
	}
	cout<<sum<<"\n";
	sum=0;
	}	
	return 0;
}
