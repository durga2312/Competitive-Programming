#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	ll m;
	cin>>n;
	cin>>m;
	ll a=0;
	ll b=0;
	a=(n*(n-1))/2;
	b=(m*(m-1))/2;
	cout<<a+b<<"\n";
	return 0;
}
