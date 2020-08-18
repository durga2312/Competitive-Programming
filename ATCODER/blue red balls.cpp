//https://atcoder.jp/contests/abc158/tasks/abc158_b
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll b;
	cin>>b;
	ll r;
	cin>>r;
	ll sum=0;
	sum=b+r;
	ll a;
	a=n/sum;
	ll c;
	c=n%sum;
	ll ans=0;
	if(c>=b)
	{
		ans=(b*a)+b;
	}
	else
	{
		ans=(b*a)+c;
	}
	cout<<ans<<"\n";
	return 0;
}
