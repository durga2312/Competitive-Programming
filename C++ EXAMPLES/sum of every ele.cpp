#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector<ll> a;
	a.resize(n);
	ll i;
	ll sum1=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(i=0;i<n;i++)
	{
		sum1=sum1+a[i];
	}
	cout<<sum1<<"\n";
	return 0;
}
