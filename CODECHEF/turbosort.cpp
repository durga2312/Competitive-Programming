//https://www.codechef.com/problems/TSORT
#include <bits/stdc++.h>
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
	sort(lis.begin(),lis.end());
	for(i=0;i<n;i++)
	{
		cout<<lis[i]<<"\n";
	}
	return 0;
}
