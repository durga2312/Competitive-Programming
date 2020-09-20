//https://www.codechef.com/ZCOPRAC/problems/ZCO14003
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector<ll> lis;
	lis.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	ll j=n;
	sort(lis.begin(),lis.end());
	vector<ll> maxlis;
	for(i=0;i<n;i++)
	{
		ll rev;
		rev=lis[i]*j;
		maxlis.push_back(rev);
		j=j-1;
	}
	sort(maxlis.begin(),maxlis.end());
	cout<<maxlis[n-1]<<"\n";
	return 0;
}
